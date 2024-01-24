/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:34 by malancar          #+#    #+#             */
/*   Updated: 2024/01/25 00:21:04 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	play()
{
	std::string input;
	std::string className;
	std::string name1;
	std::string name2;
	while(1)
	{
		std::cout << "Welcome to the arena" <<std::endl;
		std::cout << "Add two fighter to play. First you have to choose a class." <<std::endl;
		do {
			std::cout << "Class available: -ClapTrap (10HP, 10 stamina, 0 damage)" << std::endl;
			std::cout << "                 -ScavTrap (100HP, 50 stamina, 20 damage)" << std::endl;
			getline(std::cin, input);
		}
		while (input != "ClapTrap" || input != "ScavTrap");
		std::cout << "You can now choose a name: " << std::endl;
		getline(std::cin, input);
		name1 = input;
		if (className == "ClapTrap")
			ClapTrap	fighter1(name1);
		else if (className == "ScavTrap")
			ScavTrap	fighter1(name1);
		
		std::cout << "Second fighter: First you have to choose a class." <<std::endl;
		do {
			std::cout << "Class available: -ClapTrap (10HP, 10 stamina, 0 damage)" << std::endl;
			std::cout << "                 -ScavTrap (100HP, 50 stamina, 20 damage)" << std::endl;
			getline(std::cin, input);
		}
		while (input != "ClapTrap" || input != "ScavTrap");
		std::cout << "You can now choose a name: " << std::endl;
		getline(std::cin, input);
		name2 = input;
		if (className == "ClapTrap")
			ClapTrap	fighter2(name2);
		else if (className == "ScavTrap")
			ScavTrap	fighter2(name2);
		
		std::cout << "This is your available actions : - attack" << std::endl;
		std::cout << "                                 - heal" << std::endl;
		std::cout << "                                 - give up" << std::endl;
		std::cout << "Each action cost one stamina point." << std::endl;
		std::cout << "First select fighter, press enter, then choose an action and press enter" << std::endl;
		std::cout << "You are know ready to play!" <<std::endl << std::endl;
		std::cout << "          *** FIGHT ***         " << std::endl << std::endl;
		getline(std::cin, input);
		if (input == name1)
		{
			getline(std::cin, input);
			if (input == "attack")
				fighter1.attack(amount);
			else if (input == "heal")
				fighter1.beRepaired(amount);
			else if (input == "give up")
			{
				std::cout << name1 << " gives up" << std::endl;
				std::cout << name2 << " wins" << std::endl;
				return 0;
			}
			else
				std::cout << "This is your available actions : - attack" << std::endl;
		}
		else if (input == name2)
		{
			getline(std::cin, input);
			if (input == "attack")
				fighter2.attack(amount);
			else if (input == "heal")
				fighter2.beRepaired(amount);
			else if (input == "give up")
			{
				std::cout << name2 << " gives up" << std::endl;
				std::cout << name1 << " wins" << std::endl;
				return 0;
			}
			else
				std::cout << "This is your available actions : - attack" << std::endl;
		}
		else if (input == "give up")
			return 0;
		else
			std::cout << "First select fighter, press enter, then choose an action and press enter" << std::endl;
		if (fighter1.getHitPoints() <= 0)
		{
			std::cout << name1 << " KO" << std::endl;
			std::cout << name2 << " WIN!" << std::endl;
			return 0;
		}
		else if (fighter2.getHitPoints() <= 0)
		{
			std::cout << name2 << " KO" << std::endl;
			std::cout << name1 << " WIN!" << std::endl;
			return 0;
		}
	}
}

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
	for (int i = 0; mathieu.getHitPoints() > 0  ; i++)
	{
		louis.attack(mathieu.getName());
		mathieu.takeDamage(mathieu.getAttackDamage());
	}
	ScavTrap::winner(louis, mathieu);
	louis.displayState();
	mathieu.displayState();
	std::cout << "*** FIGHT OVER ***" << std::endl;
	for(int i = 0; mathieu.getHitPoints() < 100; i++)
		mathieu.beRepaired(mathieu.getAttackDamage());
	
	mathieu.displayState();
	mathieu.guardGate();
	//play();//ca serait cool que ca marche mais sinon je laisse le test au dessus cést deja bien
	return 0;
}
