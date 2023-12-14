/*
 * Chromosome.cpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#include "Chromosome.hpp"

XCS::Chromosome::Chromosome(const unsigned int t_messagesize) :
		m_messagesize(t_messagesize) {
}

XCS::Chromosome::~Chromosome() {

}

void XCS::Chromosome::setChromosome(const std::vector<char> &t_gene) {
	const unsigned int ind = t_gene.size();
	for (unsigned int i = 0; i != ind; ++i) {
		m_locus.push_back(i);
	}
	m_gene = t_gene;

}

void XCS::Chromosome::setChromosome(const std::vector<char> &t_gene,
		const std::list<unsigned int> &t_locus) {
	m_gene = t_gene;
	m_locus = t_locus;
}

void XCS::Chromosome::showChromosome() {
	unsigned int ind = 0;
	for (unsigned int i = 0; i != m_messagesize; ++i) {
		auto it = boost::find(m_locus, i);
		if (it != m_locus.end()) {
			std::cout << m_gene[ind++];
		} else {
			std::cout << "#";
		}
	}

	/*std::cout << " (";
	for (auto &ind : m_locus) {
		std::cout << " " << ind;
	}
	std::cout << ")";*/
}

