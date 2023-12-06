/*
 * Rule.cpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#include "Rule.hpp"

Rule::Rule(const Chromosome &t_message, const Chromosome &t_rule) :
		Individual(t_message), m_rule(t_rule) {
}

Rule::~Rule() {

}

void Rule::showRule() {
	Individual::showIndividual();
	std::cout << ":";
	m_rule.showChromosome();
	std::cout << "" << std::endl;
}

