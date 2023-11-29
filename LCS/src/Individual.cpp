/*
 * Individual.cpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#include "Individual.hpp"

Individual::Individual(const Chromosome &t_chromosome) :
		m_chromosome(t_chromosome) {
}

Individual::~Individual() {

}

void Individual::showIndividual() {
	m_chromosome.showChromosome();
}
