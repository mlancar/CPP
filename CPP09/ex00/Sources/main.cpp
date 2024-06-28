/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:51:22 by malancar          #+#    #+#             */
/*   Updated: 2024/06/28 19:45:53 by malancar         ###   ########.fr       */
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
	std::ifstream infile(av[1], std::ios_base::in);
	if (!infile)
	{
		std::cerr << "Cannot open" << infile << std::endl;
		return 0;
	}
	try {
		bitcoinExchange.fillData(av[1]);
	}
	catch (std::exception const& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}