/*
 * DataBase.hpp
 *
 *  Created on: 24 de nov. de 2023
 *      Author: uriel
 */

#ifndef DATABASE_HPP_
#define DATABASE_HPP_

#include <string>

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

#include "CodeWord.hpp"

class DataBase {
public:
	DataBase();
	virtual ~DataBase();
	std::vector<CodeWord> DBSearch(const std::string&);
private:
	sql::Driver *driver { };
	sql::Connection *con { };
	sql::Statement *stmt { };
	sql::ResultSet *res { };
};

#endif /* DATABASE_HPP_ */
