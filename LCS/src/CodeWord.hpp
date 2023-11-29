/*
 * CodeWord.hpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#ifndef CODEWORD_HPP_
#define CODEWORD_HPP_

#include "Individual.hpp"

class CodeWord: public Individual {
public:
	CodeWord(const Chromosome&, const std::string&, const std::string&, const unsigned int);
	virtual ~CodeWord();
	void showCodeWord();

private:
	unsigned int m_id { };
	unsigned int m_degree { };
	std::string m_labelingcase { };
	std::string m_labeling { };
};

#endif /* CODEWORD_HPP_ */
