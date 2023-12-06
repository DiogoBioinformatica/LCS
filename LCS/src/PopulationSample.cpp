/*
 * PopulationSample.cpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#include "PopulationSample.hpp"

PopulationSample::PopulationSample(const unsigned int t_messagelength) {
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
		m_instances.push_back(Instance(chrmessage, chrclassifier));
	}
}

PopulationSample::~PopulationSample() {

}

std::vector<char> PopulationSample::makeMessage(const unsigned int total) {
	std::vector<char> message(total);
	for (unsigned int i = 0; i != total; ++i) {
		unsigned int seed = rand() % 4;
		std::string temp = std::to_string(seed);
		const char *seedchar = temp.c_str();
		message[i] = *seedchar;
	}
	return message;
}

void PopulationSample::makeRule(const unsigned int total) {
	std::vector<char> message(total);
	for (unsigned int i = 0; i != total; ++i) {
		unsigned int seed = rand() % 4;
		std::string temp = std::to_string(seed);
		const char *seedchar = temp.c_str();
		message[i] = *seedchar;
	}
}

void PopulationSample::showPopulationSample() {
	for (auto &cws : m_instances) {
		cws.showInstance();
	}
}

