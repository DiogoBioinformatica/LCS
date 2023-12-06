/*
 * PopulationRule.hpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#ifndef POPULATIONRULE_HPP_
#define POPULATIONRULE_HPP_

#include <ctime>
#include <vector>

#include "Chromosome.hpp"
#include "Rule.hpp"

class PopulationRule {
public:
	PopulationRule(const unsigned int);
	virtual ~PopulationRule();
	std::vector<char> makeMessage(const unsigned int);
	void makeRule(const unsigned int total);
	void showPopulationRule();
private:
	std::vector<Rule> m_rules;
};

#endif /* POPULATIONRULE_HPP_ */
