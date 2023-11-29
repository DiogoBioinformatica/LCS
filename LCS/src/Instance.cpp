/*
 * Instance.cpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#include "Instance.hpp"

Instance::Instance(const Chromosome &t_message, const Chromosome &t_classifier) :
		Individual(t_message), m_classifier(t_classifier) {
}

Instance::~Instance() {

}

void Instance::showInstance() {
	Individual::showIndividual();
	std::cout << ":";
	m_classifier.showChromosome();
	std::cout << "" << std::endl;
}

