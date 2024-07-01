/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:20:31 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 13:28:04 by malancar         ###   ########.fr       */
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

	std::ifstream _inputFile(inputFile.c_str(), std::ios_base::in);
	if (!_inputFile.is_open())
		throw std::runtime_error("Cannot open: " + inputFile);
	std::ifstream _dataBase(dataBase.c_str(), std::ios_base::in);
	if (!_dataBase.is_open())
		throw std::runtime_error("Cannot open: " + dataBase);
}

void	BitcoinExchange::parseDate(std::ifstream *file, char separator) {
	
	std::string line;
	std::string year;
	std::string month;
	std::string day;
	std::string date;
	double		value;
	
	while (getline((*file), line)) {
		std::istringstream iss (line);
		
		iss >> date >> separator >> value;
		// std::cout << "data = " << date << std::endl;
		// std::cout << "value = " << value << std::endl;
		// std::cout << "seprator = " << separator << std::endl;
		if (separator == ',' && iss.fail() == true)
			throw std::invalid_argument("DataBase corrupted: " + line);
		else if (iss.fail() == true)
			std::cerr <<  "Syntax error: " << line << std::endl;
		struct tm tm;
		
		if (!strptime(date.c_str(), "%F", &tm))
			throw std::invalid_argument(line);
	}
}

void	BitcoinExchange::fillData() {

	std::string line;
	std::string key;
	float value;
	std::string tmp;
	
	while (getline(_dataBase, line)) {
		if (line.find(',') == std::string::npos)
			throw std::invalid_argument("Syntax error" + line);
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