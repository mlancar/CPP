/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:51:22 by malancar          #+#    #+#             */
/*   Updated: 2024/07/02 17:52:08 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	
	BitcoinExchange bitcoinExchange;
	if (ac != 2)
	{
		std::cerr << "Expected 2 parameters" << std::endl;
		return 0;
	}
	//gros caca qui pue
	//c'est moi hihihi
	try {
		bitcoinExchange.openFiles("data.csv", av[1]);
		bitcoinExchange.parseDataBase();
		bitcoinExchange.parseInputFile();
		bitcoinExchange.fillData();
		bitcoinExchange.exchange();
	}
	catch (std::exception const& e) {
		std::cerr <<  e.what() << std::endl;
	}
	//bitcoinExchange.displayData();
	return 0;
}