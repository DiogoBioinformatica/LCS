/*
 * PopulationRule.cpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#include "PopulationRule.hpp"

XCS::PopulationRule::PopulationRule(const unsigned int t_populationsize, const unsigned int t_messagesize) {
	m_populationsize = t_populationsize;
	m_messagesize = pow(2, t_messagesize) - 1;
	std::cout << "total " << m_messagesize + 1 << std::endl;
}

XCS::PopulationRule::~PopulationRule() {

}

void XCS::PopulationRule::assemblyRule() {

	srand((unsigned int) time(0));


	for (unsigned int i = 0; i != m_populationsize; ++i) {
		Chromosome chrmessage = Chromosome(m_messagesize);
		std::vector<char> message;

		message = makeMessage();
		Chromosome chrrule = Chromosome(m_messagesize);
		chrrule = makeRule(message);

		chrmessage.setChromosome(message);
		Chromosome chrclassifier = Chromosome(1);
		std::vector<char> classifier;
		classifier.push_back(message[i]);
		chrclassifier.setChromosome(classifier);
		m_rules.push_back(Rule(chrmessage, chrclassifier, chrrule, chrclassifier));
	}
}

std::vector<char> XCS::PopulationRule::makeMessage() {
	std::vector<char> message(m_messagesize);

	for (unsigned int i = 0; i != m_messagesize; ++i) {
		unsigned int seed = rand() % 2;
		std::string temp = std::to_string(seed);
		const char *seedchar = temp.c_str();
		message[i] = *seedchar;
	}
	return message;
}

const XCS::Chromosome XCS::PopulationRule::makeRule(const std::vector<char> &t_message) {
	const unsigned int interval = 1 + rand() % (m_messagesize - 1);

	std::list<unsigned int> locusdelete { };

	for (unsigned int i = 0; i != interval; ++i) {
		const unsigned int seed = 1 + rand() % (m_messagesize - 1);
		auto it = boost::find(locusdelete, seed);
		if (it == locusdelete.end()) {
			locusdelete.push_back(seed);
		} else {
			--i;
		}
	}
	locusdelete.sort();

	std::list<unsigned int> locusnew { };
	std::list<unsigned int>::iterator it;

	for (unsigned int i = 0; i != m_messagesize; ++i) {
		locusnew.push_back(i);
	}

	std::list<unsigned int> locusresult { };
	std::set_difference(locusnew.begin(), locusnew.end(), locusdelete.begin(),
			locusdelete.end(), std::back_inserter(locusresult));

	std::vector<char> rule;
	for (auto &ind : locusresult) {
		rule.push_back(t_message[ind]);
	}

	Chromosome chrrule = Chromosome(m_messagesize);
	chrrule.setChromosome(rule, locusresult);

	return chrrule;
}

void XCS::PopulationRule::showPopulationRule() {
	for (auto &cws : m_rules) {
		cws.showRule();
	}
}

