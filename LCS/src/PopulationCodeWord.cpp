/*
 * PopulationCodeWord.cpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#include "PopulationCodeWord.hpp"

PopulationCodeWord::PopulationCodeWord(const std::vector<CodeWord> &t_codewords) :
		m_codewords(t_codewords) {

}

PopulationCodeWord::~PopulationCodeWord() {

}

void PopulationCodeWord::showPopulationCodeWord() {
	for (auto &cws : m_codewords) {
		cws.showCodeWord();
		std::cout << "" << std::endl;
	}
}

