/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:20:23 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 13:27:10 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <sstream>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		
		std::ifstream*	getDataBase();
		std::ifstream*	getInputFile();
		void	openFiles(std::string const& dataBase, std::string const& inputFile);
		void	fillData();
		void	parseDate(std::ifstream *file, char separator);
		void	displayData();
		
	private:
		std::map<std::string, double> _data;
		std::ifstream	_inputFile;
		std::ifstream	_dataBase;
};



#endif