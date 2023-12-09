/*
 * Individual.hpp
 *
 *  Created on: 7 de dez. de 2023
 *      Author: uriel
 */

#ifndef INDIVIDUAL_HPP_
#define INDIVIDUAL_HPP_

#include "Chromosome.hpp"

namespace XCS {

class Individual {
public:
	Individual(const Chromosome&, const Chromosome&);
	//(const XCS::Chromosome&, const XCS::Chromosome&);
	virtual ~Individual();
	void showIndividual();

protected:
	Chromosome m_message;
	Chromosome m_classifier;
};

}

#endif /* INDIVIDUAL_HPP_ */
