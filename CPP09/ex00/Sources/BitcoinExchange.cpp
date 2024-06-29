/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:20:31 by malancar          #+#    #+#             */
/*   Updated: 2024/06/29 20:03:09 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::~BitcoinExchange() {
}

void	BitcoinExchange::fillData() {

	std::ifstream dataFile("data.csv", std::ios_base::in);
	if (!dataFile)
		throw std::runtime_error("Cannot open file");
	std::string line;
	std::string key;
	float value;
	std::string tmp;
	
	while (getline(dataFile, line)) {
		if (line.find(',') == std::string::npos)
			throw std::invalid_argument("Syntax error" + line);
		key = line.substr(0, line.find(','));
		tmp = (line.substr(line.find(',') + 1));
		value = atof(tmp.c_str());
		_data[key] = value;
	}
}

void	BitcoinExchange::parseInput(char *file) {

	std::ifstream infile(file, std::ios_base::in);
	
	if (!infile)
		throw std::runtime_error("Cannot open file");

	std::string line;
	std::string year;
	std::string month;
	std::string day;
	std::string date;
	char 		separator;
	double		value;
	
	while (getline(infile, line)) {
		std::istringstream iss (line);
		
		iss >> date >> separator >> value;
		// std::cout << "data = " << date << std::endl;
		// std::cout << "value = " << value << std::endl;
		// std::cout << "seprator = " << separator << std::endl;
		if (iss.fail() == true)
			throw std::invalid_argument("Syntax error" + line);
		struct tm tm;
		
		if (!strptime(date.c_str(), "%F", &tm))
			throw std::invalid_argument(line);
		
	}
}

void	BitcoinExchange::displayData() {
	
	for (std::map<std::string, double>::iterator i = _data.begin(); i != _data.end(); i++) {
		std::cout << i->first << i->second << std::endl;
	}
}