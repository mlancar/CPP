/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:20:23 by malancar          #+#    #+#             */
/*   Updated: 2024/07/03 16:11:20 by malancar         ###   ########.fr       */
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
#include <iterator>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		
		std::ifstream*	getDataBase();
		std::ifstream*	getInputFile();
		void	openFiles(std::string const& dataBase, std::string const& inputFile);
		void	parseDataBase();
		bool	isInputValid(std::string line, int i);
		void	fillData();
		void	displayData();
		void	exchange();
		std::map<std::string, double>::iterator	findClosestDate(std::string date);
		
	private:
		std::map<std::string, double> _data;
		std::ifstream	_inputFile;
		std::ifstream	_dataBase;
};



#endif