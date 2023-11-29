/*
 * Individual.hpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#ifndef INDIVIDUAL_HPP_
#define INDIVIDUAL_HPP_

#include "Chromosome.hpp"

class Individual {
public:
	Individual(const Chromosome&);
	virtual ~Individual();
	void showIndividual();

protected:
	Chromosome m_chromosome;
};

#endif /* INDIVIDUAL_HPP_ */
