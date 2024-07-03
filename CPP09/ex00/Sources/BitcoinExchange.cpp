/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:20:31 by malancar          #+#    #+#             */
/*   Updated: 2024/07/03 16:13:13 by malancar         ###   ########.fr       */
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

bool	BitcoinExchange::isInputValid(std::string line, int i) {
	
	std::string year;
	std::string month;
	std::string day;
	std::string date;
	double		value;
	char separator = '|';

	std::istringstream iss (line);
	
	if (i == 0) {
		if (line != "date | value")
			std::cerr << "Syntax error: " + line << std::endl;
		else
			return true;
	}
	else {
		//check date
		struct tm tm;
		iss >> date >> separator >> value;
		if (iss.fail() == true)
			std::cerr <<  "Syntax error: " << line << std::endl;
		else if (!strptime(date.c_str(), "%F", &tm))
			std::cerr << "Syntax error: " + line << std::endl;
		//check value
		else if (value < 0)
			std::cerr << "Number is not positive: " << value << std::endl;
		else if (value > 1000)
			std::cerr << "Number superior than 1000: " << value << std::endl;
		else
			return true;
	}
	return false;
}

void	BitcoinExchange::fillData() {

	std::string line;
	std::string key;
	float value;
	std::string tmp;
	
	_dataBase.clear();
	_dataBase.seekg(0, _dataBase.beg);
	while (getline(_dataBase, line)) {
		key = line.substr(0, line.find(','));
		tmp = (line.substr(line.find(',') + 1));
		value = atof(tmp.c_str());
		_data[key] = value;
	}
}

void	BitcoinExchange::displayData() {
	
	for (std::map<std::string, double>::iterator i = _data.begin(); i != _data.end(); i++) {
		std::cout << i->first << "," << i->second << std::endl;
	}
}

std::map<std::string, double>::iterator	BitcoinExchange::findClosestDate(std::string date) {
	std::map<std::string, double>::iterator iterator;

	iterator = _data.upper_bound(date);
	if (iterator == _data.begin()) {//return quelque chose
		std::cerr << "All dates in the dataBase are greater than ther date the inputFile" << std::endl;
	}
	--iterator;
	//std::cout << "closest date in database: " << iterator->first << std::endl;
	return iterator;
}

void	BitcoinExchange::exchange() {

	std::string line;
	std::string date;
	double		value;
	double		result;
	char separator = '|';
	int i = 0;
	std::map<std::string, double>::iterator iterator;
	
	
	_inputFile.clear();
	_inputFile.seekg(0, _inputFile.beg);
	while (getline(_inputFile, line)) {
		if (isInputValid(line, i) == true && line != "date | value") {
			std::istringstream iss (line);
			iss >> date >> separator >> value;
			iterator = _data.find(date);
			if (iterator != _data.end()) {
				result = value * iterator->second;
				std::cout << iterator->first << " => " << value << " = " << result << std::endl;
			}
			else {
				iterator = findClosestDate(date);//check return
				result = value * iterator->second;
				std::cout << iterator->first << " => " << value << " = " << result << std::endl;
			}
		}
		i++;
	}
}
