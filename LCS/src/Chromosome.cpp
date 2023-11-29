/*
 * Chromosome.cpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#include "Chromosome.hpp"

Chromosome::Chromosome(const unsigned int t_messagelength) :
		m_messagelength(t_messagelength) {
}

Chromosome::~Chromosome() {

}

void Chromosome::setChromosome(const std::vector<char> &t_gene) {
	const unsigned int ind = t_gene.size();
	for (unsigned int i = 0; i != ind; ++i) {
		m_locus.push_back(i);
	}
	m_gene = t_gene;

}

void Chromosome::showChromosome() {
	unsigned int ind = 0;
	for (unsigned int i = 0; i != m_messagelength; ++i) {
		auto it = boost::find(m_locus, i);
		if (it != m_locus.end()) {
			std::cout << m_gene[ind++];
		} else {
			std::cout << "#";
		}
	}
	/*std::cout << "" << std::endl << "\t\t\t\t\t";
	ind = 0;
	for (unsigned int i = 0; i != m_messagelength; ++i) {
		auto it = boost::find(m_locus, i);

		if (it != m_locus.end()) {
			std::cout << m_gene[ind++];
		} else {
			std::cout << "#";
		}
	}*/
}

