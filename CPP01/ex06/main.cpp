/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:44:44 by malancar          #+#    #+#             */
/*   Updated: 2024/01/16 20:24:57 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;
	
	std::string	input;
	while (getline(std::cin, input))
	{
		harl.complain(input);
		std::cout << std::setfill ('~') << std::setw (104) << "" << std::endl;
	}
}
