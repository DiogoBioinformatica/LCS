/*
 * PopulationCodeWord.hpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#ifndef POPULATIONCODEWORD_HPP_
#define POPULATIONCODEWORD_HPP_

#include "CodeWord.hpp"

class PopulationCodeWord {
public:
	PopulationCodeWord(const std::vector<CodeWord>&);
	virtual ~PopulationCodeWord();
	void showPopulationCodeWord();

private:
	std::vector<CodeWord> m_codewords;
};

#endif /* POPULATIONCODEWORD_HPP_ */
