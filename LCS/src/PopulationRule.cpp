/*
 * PopulationRule.cpp
 *
 *  Created on: 6 de dez. de 2023
 *      Author: uriel
 */

#include "PopulationRule.hpp"

PopulationRule::PopulationRule(const unsigned int t_messagelength,
		const unsigned int t_populationsize) {
	m_populationsize = t_populationsize;

	srand((unsigned int) time(0));
	const unsigned int total = pow(2, t_messagelength) - 1;
	std::cout << "total " << total + 1 << std::endl;

	for (unsigned int i = 0; i != total; ++i) {
		Chromosome chrmessage = Chromosome(total);
		//std::vector<char> message;

		auto message = std::unique_ptr<std::vector<char>>(new std::vector<char>);



		*message = makeMessage(total);
		//auto rule = std::unique_ptr<std::vector<char>>(new std::vector<char>);
		makeRule(total);




		/*chrmessage.setChromosome(message);
		 Chromosome chrclassifier = Chromosome(1);
		 std::vector<char> classifier;
		 classifier.push_back(message[i]);
		 chrclassifier.setChromosome(classifier);
		 m_rules.push_back(Rule(chrmessage, chrclassifier));*/
	}
}

PopulationRule::~PopulationRule() {

}

std::vector<char> PopulationRule::makeMessage(const unsigned int total) {
	std::vector<char> message(total);
	for (unsigned int i = 0; i != total; ++i) {
		unsigned int seed = rand() % 2;
		std::string temp = std::to_string(seed);
		const char *seedchar = temp.c_str();
		message[i] = *seedchar;
	}
	return message;
}

void PopulationRule::makeRule(const unsigned int total) {
	const unsigned int interval = 1 + rand() % (total - 1);
	std::cout << "" << std::endl;
	std::cout << " interval: " << interval << std::endl;

	std::list<unsigned int> locusdelete { };

	for (unsigned int i = 0; i != interval; ++i) {
		const unsigned int seed = 1 + rand() % (total - 1);
		std::cout << "\tseed: " << seed << std::endl;

		auto it = boost::find(locusdelete, seed);
		if (it == locusdelete.end()) {
			locusdelete.push_back(seed);
		} else {
			--i;
		}

	}

	std::cout << "" << std::endl;

	for (auto &ind: locusdelete) {
		std::cout << ind << " ";

	}

	std::cout << "" << std::endl;

	std::list<unsigned int> locusnew { };
	std::list<unsigned int>::iterator it;
	for (unsigned int i = 0; i != total; ++i) {
			locusnew.push_back(i);
		}

	std::list<unsigned int> v { };

	//std::sort(locusdelete.begin(), locusdelete.end());


	    std::set_difference(locusnew.begin(),
	    		locusnew.end(),
	                          locusdelete.begin(),
	                          locusdelete.end(),
							  std::back_inserter(v));

	    //std::set_difference(x.begin(), x.end(), y.begin(), y.end(), );

	    std::cout << "locus: " << std::endl;

	    	for (auto &ind: v) {
	    		std::cout << ind << " ";

	    	}

	//std::vector<char> message(total);
	/*for (unsigned int i = 0; i != total; ++i) {
	 unsigned int seed = rand() % 2;
	 std::string temp = std::to_string(seed);
	 const char *seedchar = temp.c_str();
	 message[i] = *seedchar;
	 }*/

	//return std::list<unsigned int> locusdelete { };
}

void PopulationRule::showPopulationRule() {
	for (auto &cws : m_rules) {
		cws.showRule();
	}
}

