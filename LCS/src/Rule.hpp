/*
 * Rule.hpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#ifndef RULE_HPP_
#define RULE_HPP_

#include "Individual.hpp"

class Rule: public Individual {
public:
	Rule(const Chromosome&, const Chromosome&);
	virtual ~Rule();
	void showRule();
private:
	//Chromosome m_addressbit;
	//Chromosome m_classifier;
	Chromosome m_rule;

};

#endif /* RULE_HPP_ */
