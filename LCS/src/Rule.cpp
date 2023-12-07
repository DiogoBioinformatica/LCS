/*
 * Rule.cpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#include "Rule.hpp"

XCS::Rule::Rule(const Chromosome &t_message, const Chromosome &t_rule, const Chromosome &t_addressbit) :
		Individual(t_message), m_rule(t_rule), m_addressbit(t_addressbit) {
}

XCS::Rule::~Rule() {

}

void XCS::Rule::showRule() {
	Individual::showIndividual();
	std::cout << " -> ";
	m_rule.showChromosome();
	std::cout << ":";
	m_addressbit.showChromosome();
	std::cout << "" << std::endl;
}

