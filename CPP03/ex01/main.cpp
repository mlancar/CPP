/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:34 by malancar          #+#    #+#             */
/*   Updated: 2024/01/23 19:08:58 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::string	className;
	ScavTrap	mathieu("Mathieu");
	ScavTrap	louis("Louis");
	
	std::cout << "Fighter :" << std::endl;
	mathieu.displayState();
	louis.displayState();
	
	std::cout << std::endl << "*** FIGHT ***" << std::endl << std::endl;
	mathieu.attack(louis.getName());
	louis.takeDamage(mathieu.getAttackDamage());
	louis.displayState();
	louis.beRepaired(mathieu.getAttackDamage());
	for (int i = 0; i < mathieu.getHitPoints() > 0  ; i++)
	{
		louis.attack(mathieu.getName());
		mathieu.takeDamage(louis.getAttackDamage());
	}
	ScavTrap::winner(louis, mathieu);
	louis.displayState();
	mathieu.displayState();
	std::cout << "*** FIGHT OVER ***" << std::endl;
	
	
	return 0;	
}
