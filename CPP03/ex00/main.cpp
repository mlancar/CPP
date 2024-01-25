/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:34 by malancar          #+#    #+#             */
/*   Updated: 2024/01/25 14:12:41 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	//ClapTrap	mathieu("Mathieu");
	ClapTrap	mathieu;
	ClapTrap	louis("Louis");
	
	std::cout << "Player :" << std::endl;
	mathieu.displayState();
	louis.displayState();
	
	std::cout << std::endl << "*** FIGHT ***" << std::endl << std::endl;
	mathieu.attack(louis.getName());
	louis.takeDamage(mathieu.getAttackDamage());
	louis.displayState();
	louis.beRepaired(mathieu.getAttackDamage());
	for (int i = 0; i < 11 ; i++)
		louis.attack(mathieu.getName());
	
	std::cout << "*** FIGHT OVER ***" << std::endl;
	louis.displayState();
	mathieu.displayState();

	return 0;	
}
