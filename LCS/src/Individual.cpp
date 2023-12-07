/*
 * Individual.cpp
 *
 *  Created on: 7 de dez. de 2023
 *      Author: uriel
 */

#include "Individual.hpp"

XCS::Individual::Individual(const XCS::Chromosome &t_chromosome) :
		m_chromosome(t_chromosome) {
}

XCS::Individual::~Individual() {

}

void XCS::Individual::showIndividual() {
	m_chromosome.showChromosome();
}

