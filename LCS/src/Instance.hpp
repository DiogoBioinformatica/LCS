/*
 * Instance.hpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#ifndef INSTANCE_HPP_
#define INSTANCE_HPP_

#include "Individual.hpp"

class Instance: public Individual {
public:
	Instance(const Chromosome&, const Chromosome&);
	virtual ~Instance();
	void showInstance();
private:
	//Chromosome m_addressbit;
	Chromosome m_classifier;
};

#endif /* INSTANCE_HPP_ */
