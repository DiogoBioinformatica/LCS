/*
 * Rule.cpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#include "Rule.hpp"

Rule::Rule(const Chromosome &t_message, const Chromosome &t_classifier) :
		Individual(t_message), m_classifier(t_classifier) {
}

Rule::~Rule() {

}

void Rule::showRule() {
	Individual::showIndividual();
	std::cout << ":";
	m_classifier.showChromosome();
	std::cout << "" << std::endl;
}

