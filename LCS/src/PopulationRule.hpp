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
	PopulationRule(const unsigned int, const unsigned int);
	virtual ~PopulationRule();
	void assemblyRule();
	std::vector<char> makeMessage();
	const Chromosome makeRule(const std::vector<char>&);
	void showPopulationRule();
private:
	std::vector<XCS::Rule> m_rules;
	unsigned int m_populationsize;
	unsigned int m_messagesize;
};

}

#endif /* POPULATIONRULE_HPP_ */
