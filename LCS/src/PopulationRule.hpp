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

namespace XCS {

class PopulationRule {
public:
	PopulationRule(const unsigned int);
	virtual ~PopulationRule();
	void assemblyRule(const unsigned int);
	std::vector<char> makeMessage(const unsigned int);
	const Chromosome makeRule(const unsigned int, const std::vector<char>&);
	void showPopulationRule();
private:
	std::vector<XCS::Rule> m_rules;
	unsigned int m_populationsize;
};

}

#endif /* POPULATIONRULE_HPP_ */
