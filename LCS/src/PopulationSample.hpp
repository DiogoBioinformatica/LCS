/*
 * PopulationSample.hpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#ifndef POPULATIONSAMPLE_HPP_
#define POPULATIONSAMPLE_HPP_

#include <ctime>
#include <vector>

#include "Chromosome.hpp"
#include "Instance.hpp"

class PopulationSample {
public:
	PopulationSample(const unsigned int);
	virtual ~PopulationSample();
	std::vector<char> makeMessage(const unsigned int);
	void makeRule(const unsigned int total);
	void showPopulationSample();
private:
	std::vector<Instance> m_instances;
};

#endif /* POPULATIONSAMPLE_HPP_ */
