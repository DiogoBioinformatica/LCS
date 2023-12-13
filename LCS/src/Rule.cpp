/*
 * Rule.cpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#include "Rule.hpp"

XCS::Rule::Rule(const Chromosome &t_message, const Chromosome &t_classifier) :
		Individual(t_message, t_classifier) {
}

XCS::Rule::~Rule() {

}


void XCS::Rule::setRule(const Chromosome &t_messagerule, const Chromosome &t_classifierrule) {
		 m_messagerule = t_messagerule;
		 m_classifierrule = t_classifierrule;
}

void XCS::Rule::showRule() {
	Individual::showIndividual();
	std::cout << " -> ";
	m_messagerule.showChromosome();
	std::cout << ":";
	m_classifierrule.showChromosome();
	std::cout << "" << std::endl;
}

