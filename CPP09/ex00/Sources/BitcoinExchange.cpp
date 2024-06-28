/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:20:31 by malancar          #+#    #+#             */
/*   Updated: 2024/06/28 19:48:35 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::~BitcoinExchange() {
}

void	BitcoinExchange::fillData(char *av) {
	
	std::ifstream dataFile("../data.cvs", std::ios_base::in);
	if (!dataFile)
		throw std::runtime_error("Cannot open file");
	std::string line;
	std::string key, value;
	while (getline(dataFile, line)) {
		std::stringstream ss(line);
		std::getline(ss, key, ',');
		std::getline(ss, value, ',');
		_data
	}
}