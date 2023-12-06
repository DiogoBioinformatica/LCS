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

#include "DataBase.hpp"
#include "PopulationCodeWord.hpp"
#include "PopulationSample.hpp"

int main() {
	auto start = std::chrono::high_resolution_clock::now();

	const unsigned int messagelength = 3;

	auto database = std::unique_ptr<DataBase>(new DataBase());

	auto populationcodeword =
			std::unique_ptr<PopulationCodeWord>(
					new PopulationCodeWord(
							database->DBSearch(
									"SELECT id, message, labelingCase, labeling FROM codeword WHERE sequence_id=51;")));

	auto populationsample = std::unique_ptr<PopulationSample>(
						new PopulationSample(messagelength));
	populationsample->showPopulationSample();

	auto result = std::chrono::high_resolution_clock::now() - start;
	long long microseconds = std::chrono::duration_cast<
			std::chrono::microseconds>(result).count();
	std::cout << "" << std::endl;
	std::cout << "Execution Time: " << microseconds << " microseconds.";
	return 0;
}
