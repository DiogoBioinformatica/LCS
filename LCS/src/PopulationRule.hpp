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
	PopulationRule(const unsigned int, const unsigned int);
	virtual ~PopulationRule();
	std::vector<char> makeMessage(const unsigned int);
	std::vector<char> makeRule(const unsigned int);
	void showPopulationRule();
private:
	std::vector<Rule> m_rules;
	unsigned int m_populationsize;
};

#endif /* POPULATIONRULE_HPP_ */
