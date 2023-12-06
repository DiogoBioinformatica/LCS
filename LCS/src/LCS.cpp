//============================================================================
// Name        : LCS.cpp
// Author      : Diogo Pereira
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <chrono>
#include <string>

#include "PopulationRule.hpp"

int main() {
	auto start = std::chrono::high_resolution_clock::now();

	const unsigned int messagelength = 3;
	const unsigned int populationsize = 10;

	auto populationsample = std::unique_ptr<PopulationRule>(
							new PopulationRule(messagelength));
		populationsample->showPopulationRule();

	auto result = std::chrono::high_resolution_clock::now() - start;
	long long microseconds = std::chrono::duration_cast<
			std::chrono::microseconds>(result).count();
	std::cout << "" << std::endl;
	std::cout << "Execution Time: " << microseconds << " microseconds.";
	return 0;
}
