/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:20:31 by malancar          #+#    #+#             */
/*   Updated: 2024/07/02 18:14:49 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::~BitcoinExchange() {
}

std::ifstream*	BitcoinExchange::getDataBase() {
	return &_dataBase;
}

std::ifstream*	BitcoinExchange::getInputFile() {
	return &_inputFile;
}

void	BitcoinExchange::openFiles(std::string const& dataBase, std::string const& inputFile) {

	_inputFile.open(inputFile.c_str(), std::ios_base::in);
	if (!_inputFile.is_open())
		throw std::runtime_error("Cannot open: " + inputFile);
	_dataBase.open(dataBase.c_str(), std::ios_base::in);
	if (!_dataBase.is_open())
		throw std::runtime_error("Cannot open: " + dataBase);
	//std::cout << "la inputfile = " << _inputFile << std::endl;
	
}

void	BitcoinExchange::parseDataBase() {
	
	std::string line;
	std::string year;
	std::string month;
	std::string day;
	std::string date;
	std::string	value;
	//char separator = ',';
	int i = 0;

	while (getline(_dataBase, line)) {
		struct tm tm;
		
		if (i == 0) {
			if (line != "date,exchange_rate")
				throw std::invalid_argument("first line DataBase corrupted: " + line);
		}
		else {
			std::istringstream iss (line);
			if (!getline(iss, date, ',') || (!getline(iss, value))) {
				throw std::invalid_argument("DataBase corrupted ici: " + line);
			}
			if (!strptime(date.c_str(), "%F", &tm))
				throw std::invalid_argument("DataBase corrupted" + line);
		}
		i++;
	}
}

void	BitcoinExchange::parseInputFile() {
	
	std::string line;
	std::string year;
	std::string month;
	std::string day;
	std::string date;
	double		value;
	char separator = '|';
	int i = 0;
	
	// std::cout << "inputfile = " << _inputFile << std::endl;
	while (getline(_inputFile, line)) {
		std::istringstream iss (line);
		
		if (i == 0) {
			if (line != "date | value")
				std::cerr << "Syntax error: " + line << std::endl;
		}
		else {
			struct tm tm;
			iss >> date >> separator >> value;
			if (iss.fail() == true)
				std::cerr <<  "Syntax error: " << line << std::endl;
			else if (!strptime(date.c_str(), "%F", &tm))
				std::cerr << "Syntax error: " + line << std::endl;
		}
		i++;
	}
}

void	BitcoinExchange::fillData() {

	std::string line;
	std::string key;
	float value;
	std::string tmp;
	
	while (getline(_dataBase, line)) {
		key = line.substr(0, line.find(','));
		tmp = (line.substr(line.find(',') + 1));
		value = atof(tmp.c_str());
		_data[key] = value;
	}
}

void	BitcoinExchange::displayData() {
	
	for (std::map<std::string, double>::iterator i = _data.begin(); i != _data.end(); i++) {
		std::cout << i->first << i->second << std::endl;
	}
}

void	BitcoinExchange::exchange() {

	std::string line;
	std::map<std::string, double>::iterator iterator;
	
	// std::cout << "is open = " << _inputFile.is_open() << std::endl;
	// if (!_inputFile.is_open()) {
    //     throw std::runtime_error("Cannot open input file: ");
	// std::cout << "ici inputfile = " << &_inputFile << std::endl;
    // // }
	std::cout << getline(_inputFile, line) << std::endl;
	while (getline(_inputFile, line)) {
		std::cout << "test2" << std::endl;
		if (line != "data | value") {
			iterator = _data.find(line);
			std::cout << "line = " << line << std::endl;
			if (iterator != _data.end())
				std::cout << "find: " << iterator->first << std::endl;
		}
	}
}
