/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:20:23 by malancar          #+#    #+#             */
/*   Updated: 2024/07/02 16:49:39 by malancar         ###   ########.fr       */
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
		void	parseDataBase();
		void	parseInputFile();
		void	fillData();
		void	displayData();
		void	exchange();
		
	private:
		std::map<std::string, double> _data;
		std::ifstream	_inputFile;
		std::ifstream	_dataBase;
};



#endif