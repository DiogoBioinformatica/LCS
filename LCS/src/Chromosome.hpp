/*
 * Chromosome.hpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#ifndef CHROMOSOME_HPP_
#define CHROMOSOME_HPP_

#include <iostream>
#include <list>
#include <vector>
#include <boost/dynamic_bitset.hpp>
#include <boost/range/algorithm/find.hpp>

namespace XCS {

class Chromosome {
public:
	Chromosome(const unsigned int);
	virtual ~Chromosome();
	void setChromosome(const std::vector<char>&);
	void setChromosome(const std::vector<char>&, const std::list<unsigned int>&);
	void showChromosome();
private:
	std::vector<char> m_gene { };
	std::list<unsigned int> m_locus { };
	unsigned int m_messagelength { };
};

}

#endif /* CHROMOSOME_HPP_ */
