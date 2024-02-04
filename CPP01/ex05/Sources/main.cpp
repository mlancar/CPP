/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:44:44 by malancar          #+#    #+#             */
/*   Updated: 2024/01/18 15:44:30 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	
	if (ac != 2)
	{
		std::cerr << "One parameter is expected" << std::endl;
		return 1;
	}
	std::string	input = av[1];
	harl.complain(input);
	std::cout << std::setfill ('~') << std::setw (140) << "" << std::endl;
}
