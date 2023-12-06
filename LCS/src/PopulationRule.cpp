/*
 * PopulationRule.cpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#include "PopulationRule.hpp"

PopulationRule::PopulationRule(const unsigned int t_messagelength) {
	srand((unsigned int) time(0));
	const unsigned int total = pow(2, t_messagelength) - 1;
	std::cout << "total " << total + 1 << std::endl;

	for (unsigned int i = 0; i != total; ++i) {
		Chromosome chrmessage = Chromosome(total);
		std::vector<char> message;
		message = makeMessage(total);
		chrmessage.setChromosome(message);
		Chromosome chrclassifier = Chromosome(1);
		std::vector<char> classifier;
		classifier.push_back(message[i]);
		chrclassifier.setChromosome(classifier);
		m_rules.push_back(Rule(chrmessage, chrclassifier));
	}
}

PopulationRule::~PopulationRule() {

}

std::vector<char> PopulationRule::makeMessage(const unsigned int total) {
	std::vector<char> message(total);
	for (unsigned int i = 0; i != total; ++i) {
		unsigned int seed = rand() % 4;
		std::string temp = std::to_string(seed);
		const char *seedchar = temp.c_str();
		message[i] = *seedchar;
	}
	return message;
}

void PopulationRule::makeRule(const unsigned int total) {
	std::vector<char> message(total);
	for (unsigned int i = 0; i != total; ++i) {
		unsigned int seed = rand() % 4;
		std::string temp = std::to_string(seed);
		const char *seedchar = temp.c_str();
		message[i] = *seedchar;
	}
}

void PopulationRule::showPopulationRule() {
	for (auto &cws : m_rules) {
		cws.showRule();
	}
}

