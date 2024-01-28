/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:34 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 18:23:27 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	isFightEnding(ClapTrap &fighter1, ClapTrap &fighter2)
{
	if (fighter1.getHitPoints() <= 0)
	{
		std::cout << fighter1.getName() << " KO" << std::endl;
		std::cout << fighter2.getName() << " WIN!" << std::endl;
		return 1;
	}
	else if (fighter2.getHitPoints() <= 0)
	{
		std::cout << fighter2.getName() << " KO" << std::endl;
		std::cout << fighter1.getName() << " WIN!" << std::endl;
		return 1;
	}
	return 0;
	
}

int	actions(ClapTrap &give, ClapTrap &take)
{
	std::string input;
	
	getline(std::cin, input);
	if (std::cin.eof())
		return 1;
	if (input == "attack")
	{
		give.attack(take.getName());
		take.takeDamage(give.getAttackDamage());
	}
	else if (input == "heal")
		give.beRepaired(give.getAttackDamage());
	else if (input == "state")
		give.displayState();
	else if (input == "give up")
	{
		std::cout << give.getName() << " gives up" << std::endl;
		std::cout << take.getName() << " wins" << std::endl;
		return 1;
	}
	else
		std::cout << "This is your available actions : - attack" << std::endl;
	return 0;
}

void	fight(ClapTrap &fighter1, ClapTrap &fighter2)
{
	std::string input;
	
	std::cout << std::endl ;
	std::cout << "This is your available actions : - attack" << std::endl;
	std::cout << "                                 - heal" << std::endl;
	std::cout << "                                 - state (display fighter state)" << std::endl;
	std::cout << "                                 - give up" << std::endl;
	std::cout << "Each action cost one stamina point." << std::endl;
	std::cout << "First select fighter, press enter, then choose an action and press enter" << std::endl;
	std::cout << "You are know ready to play!" <<std::endl << std::endl;
	std::cout << "          *** FIGHT ***         " << std::endl << std::endl;
	while (1)
	{
		getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (std::cin.eof())
			return;
		if (input == fighter1.getName())
		{
			if (actions(fighter1, fighter2) == 1)
				return ;
		}
		else if (input == fighter2.getName())
		{
			if (actions(fighter2, fighter1) == 1)
				return ;
		}
		else if (input == "give up")
			return ;
		else
			std::cout << "First select fighter, press enter, then choose an action and press enter" << std::endl;
		if (isFightEnding(fighter1, fighter2) == 1)
			return ;
	}
	return ;
}

int	play()
{
	std::string input;
	std::string className;
	std::string name;	
	
	while (1)
	{
		std::cout << "Welcome to the arena" <<std::endl;
		std::cout << "You can quit at any moment by entering: give up" << std::endl << "Add two fighter to play." << std::endl;
		std::cout << "Class available:  -ClapTrap (10HP, 10 stamina, 0 damage)" << std::endl;
		std::cout << "Your class is ClapTrap" << std::endl;
		std::cout << "Choose a name for fighter1: " << std::endl;
		getline(std::cin, input);
		if (std::cin.eof())
			return 0;
		name = input;
		ClapTrap fighter1(name);
		std::cout << "Choose a name for fighter2: " << std::endl;
		getline(std::cin, input);
		if (std::cin.eof())
			return 0;
		name = input;
		std::cout << std::endl;
		ClapTrap fighter2(name);
		fight(fighter1, fighter2);
		while (1)
		{
			std::cout << "Do you want to play again ? yes or no ?" << std::endl;
			getline(std::cin, input);
			if (std::cin.eof())
				return 0;
			if (input == "yes")
				break;
			else if (input == "no")
				return 0;
		}
	}
}
int	main()
{
	play();
	return 0;	
}
