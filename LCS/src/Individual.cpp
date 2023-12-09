/*
 * Individual.cpp
 *
 *  Created on: 7 de dez. de 2023
 *      Author: uriel
 */

#include "Individual.hpp"

XCS::Individual::Individual(const XCS::Chromosome &t_message, const XCS::Chromosome &t_classifier) :
m_message(t_message), m_classifier(t_classifier) {
}

XCS::Individual::~Individual() {

}

void XCS::Individual::showIndividual() {
	m_message.showChromosome();
	std::cout << ":";
	m_classifier.showChromosome();
}
