/*
 * Rule.hpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#ifndef RULE_HPP_
#define RULE_HPP_

#include "Individual.hpp"

namespace XCS {

class Rule: public Individual {
public:
	Rule(const Chromosome&, const Chromosome&);
	virtual ~Rule();
	void setRule(const Chromosome&, const Chromosome&);
	void showRule();
private:
	Chromosome m_messagerule;
	Chromosome m_classifierrule;
};

}

#endif /* RULE_HPP_ */
