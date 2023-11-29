/*
 * CodeWord.cpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#include "CodeWord.hpp"

CodeWord::CodeWord(const Chromosome &t_chromosome,
		const std::string &t_labelingcase, const std::string &t_labeling, const unsigned int t_id) :
		Individual(t_chromosome) {
	m_id = t_id;
	m_degree = 10;
	m_labelingcase = t_labelingcase;
	m_labeling = t_labeling;
}

CodeWord::~CodeWord() {

}

void CodeWord::showCodeWord() {
	std::cout << "Labeling Case: " << m_labelingcase << "\t";
	std::cout << "Labeling: " << m_labeling << "\t";

	Individual::showIndividual();
}

