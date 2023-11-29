/*
 * DataBase.cpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#include "DataBase.hpp"

DataBase::DataBase() {
	driver = get_driver_instance();
	con = driver->connect("tcp://127.0.0.1:3306", "root", "06S08g1945%");
	con->setSchema("dnacoder");
}

DataBase::~DataBase() {
	// TODO Auto-generated destructor stub
}

std::vector<CodeWord> DataBase::DBSearch(const std::string &query) {
	try {
		stmt = con->createStatement();
		res = stmt->executeQuery(query);
		unsigned int n = res->rowsCount();
		std::cout << "Number of rows : " << n << std::endl;

		std::vector<CodeWord> codewords;

		while (res->next()) {
			Chromosome chromosome = Chromosome(
					strlen(res->getString("message").c_str()));
			std::string messagestring = res->getString("message");
			std::vector<char> messagechar { };
			std::copy(messagestring.begin(), messagestring.end(),
					std::back_inserter(messagechar));

			chromosome.setChromosome(messagechar);
			codewords.push_back(
					CodeWord(chromosome, res->getString("labelingCase"),
							res->getString("labeling"), res->getInt("id")));
		}
		return codewords;

	} catch (sql::SQLException &e) {
		std::cout << "# ERR: SQLException in " << __FILE__;
		std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__
				<< std::endl;
		std::cout << "# ERR: " << e.what();
		std::cout << " (MySQL error code: " << e.getErrorCode();
		std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}
	//return 0;
}

