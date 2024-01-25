/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:34 by malancar          #+#    #+#             */
/*   Updated: 2024/01/25 18:05:56 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	isFightEnding(ScavTrap &fighter1, ScavTrap &fighter2)
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

int	actions(ScavTrap &give, ScavTrap &take)
{
	std::string input;
	
	getline(std::cin, input);
	if (input == "attack")
	{
		give.attack(take.getName());
		take.takeDamage(give.getAttackDamage());
	}
	else if (input == "heal")
		give.beRepaired(give.getAttackDamage());
	else if (input == "state")
		give.displayState();
	else if (input == "highfive")
		give.guardGate();
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

void	fight(ScavTrap &fighter1, ScavTrap fighter2)
{
	std::string input;
	
	std::cout << std::endl ;
	std::cout << "This is your available actions : - attack" << std::endl;
	std::cout << "                                 - heal" << std::endl;
	std::cout << "                                 - state (display fighter state)" << std::endl;//display fighter state
	std::cout << "                                 - high five" << std::endl;
	std::cout << "                                 - give up" << std::endl;
	std::cout << "Each action cost one stamina point." << std::endl;
	std::cout << "First select fighter, press enter, then choose an action and press enter" << std::endl;
	std::cout << "You are know ready to play!" <<std::endl << std::endl;
	std::cout << "          *** FIGHT ***         " << std::endl << std::endl;
	while (1)
	{
		getline(std::cin, input);
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

int	addFighter(std::string &name)
{
	std::string input;
	
	std::cout << "First you have to choose a class." <<std::endl << std::endl;
	do {
		std::cout << "Class available: -ScavTrap (100HP, 100 stamina, 20 damage)" << std::endl;
		std::cout << "                 " << std::endl;
		getline(std::cin, input);
		if (input == "give up")
			return 0;
	}
	while (input != "ScavTrap" );
	std::cout << "You can now choose a name: " << std::endl;
	getline(std::cin, input);
	name = input;
	std::cout << std::endl;
	return 1;
}

int	play()
{
	std::string input;
	std::string className;
	std::string name1;
	std::string name2;
	
	while (1)
	{
		// if (className == "ClapTrap")
		// 	ClapTrap	fighter1(name1);
		// else if (className == "ScavTrap")
		std::cout << "Welcome to the arena" <<std::endl;
		std::cout << "You can quit at any moment by entering: give up" << std::endl << "Add two fighter to play." << std::endl;
		if (addFighter(name1) == 0)
			return 0;
		ScavTrap	fighter1(name1);
		if (addFighter(name2) == 0)
			return 0;
		ScavTrap	fighter2(name2);
		fight(fighter1, fighter2);
		while (1)
		{
			std::cout << "Do you want to play again ? yes or no ?" << std::endl;
			getline(std::cin, input);
			if (input == "yes")
				break;
			else if (input == "no")
				return 0;
		}
	}
}

int	main()
{
	// std::string	className;
	// ScavTrap	mathieu("Mathieu");
	// ScavTrap	louis("Louis");
	// //unsigned int amount = 20;

	
	// std::cout << "Fighter :" << std::endl;
	// mathieu.displayState();
	// louis.displayState();
	
	// std::cout << std::endl << "*** FIGHT ***" << std::endl << std::endl;
	// mathieu.attack(louis.getName());
	// louis.takeDamage(mathieu.getAttackDamage());
	// louis.displayState();
	// louis.beRepaired(mathieu.getAttackDamage());
	// for (int i = 0; mathieu.getHitPoints() > 0  ; i++)
	// {
	// 	louis.attack(mathieu.getName());
	// 	mathieu.takeDamage(mathieu.getAttackDamage());
	// }
	// ScavTrap::winner(louis, mathieu);
	// louis.displayState();
	// mathieu.displayState();
	// std::cout << "*** FIGHT OVER ***" << std::endl;
	// for(int i = 0; mathieu.getHitPoints() < 100; i++)
	// 	mathieu.beRepaired(mathieu.getAttackDamage());
	
	// mathieu.displayState();
	// mathieu.guardGate();
	play();//ca serait cool que ca marche mais sinon je laisse le test au dessus cést deja bien
	return 0;
}
