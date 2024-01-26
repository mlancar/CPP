/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:34 by malancar          #+#    #+#             */
/*   Updated: 2024/01/26 16:39:13 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	isFightEndingClap(ClapTrap &fighter1, ClapTrap &fighter2)
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

int	actionsClap(ClapTrap &give, ClapTrap &take)
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

void	fightClap(ClapTrap &fighter1, ClapTrap &fighter2)
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
		if (input == fighter1.getName())
		{
			if (actionsClap(fighter1, fighter2) == 1)
				return ;
		}
		else if (input == fighter2.getName())
		{
			if (actionsClap(fighter2, fighter1) == 1)
				return ;
		}
		else if (input == "give up")
			return ;
		else
			std::cout << "First select fighter, press enter, then choose an action and press enter" << std::endl;
		if (isFightEndingClap(fighter1, fighter2) == 1)
			return ;
	}
	return ;
}

int	isFightEndingScav(ScavTrap &fighter1, ScavTrap &fighter2)
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

int	actionsScav(ScavTrap &give, ScavTrap &take)
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
	else if (input == "guard")
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

void	fightScav(ScavTrap &fighter1, ScavTrap &fighter2)
{
	std::string input;
	
	std::cout << std::endl ;
	std::cout << "This is your available actions : - attack" << std::endl;
	std::cout << "                                 - heal" << std::endl;
	std::cout << "                                 - state (display fighter state)" << std::endl;//display fighter state
	std::cout << "                                 - guard" << std::endl;
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
			if (actionsScav(fighter1, fighter2) == 1)
				return ;
		}
		else if (input == fighter2.getName())
		{
			if (actionsScav(fighter2, fighter1) == 1)
				return ;
		}
		else if (input == "give up")
			return ;
		else
			std::cout << "First select fighter, press enter, then choose an action and press enter" << std::endl;
		if (isFightEndingScav(fighter1, fighter2) == 1)
			return ;
	}
	return ;
}

int	isFightEndingFrag(FragTrap &fighter1, FragTrap &fighter2)
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

int	actionsFrag(FragTrap &give, FragTrap &take)
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
	else if (input == "high five")
		give.highFivesGuys();
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

void	fightFrag(FragTrap &fighter1, FragTrap &fighter2)
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
			if (actionsFrag(fighter1, fighter2) == 1)
				return ;
		}
		else if (input == fighter2.getName())
		{
			if (actionsFrag(fighter2, fighter1) == 1)
				return ;
		}
		else if (input == "give up")
			return ;
		else
			std::cout << "First select fighter, press enter, then choose an action and press enter" << std::endl;
		if (isFightEndingFrag(fighter1, fighter2) == 1)
			return ;
	}
	return ;
}

int	addFighter(std::string &className)
{
	std::string input;
	
	std::cout << "First you have to choose a class." <<std::endl << std::endl;
	do {
		std::cout << "Class available: -FragTrap (100HP, 100 stamina, 30 damage)" << std::endl;
		std::cout << "                 -ScavTrap (100HP, 100 stamina, 20 damage)" << std::endl;
		std::cout << "                 -ClapTrap (10HP, 10 stamina, 0 damage)" << std::endl;
		getline(std::cin, input);
		if (input == "give up")
			return 0;
	}
	while (input != "FragTrap" && input != "ClapTrap" && input != "ScavTrap");
	className = input;
	
	return 1;
}

int	play()
{
	std::string input;
	std::string className;
	std::string name1;
	std::string name2;
	ClapTrap *fighter1;
	ClapTrap *fighter2;
	
	while (1)
	{
		// if (className == "ClapTrap")
		// 	ClapTrap	fighter1(name1);
		// else if (className == "ScavTrap")
		std::cout << "Welcome to the arena" <<std::endl;
		std::cout << "You can quit at any moment by entering: give up" << std::endl << "Add two fighter to play." << std::endl;
		if (addFighter(className) == 0)
			return 0;
		std::cout << "Choose a name for fighter1: " << std::endl;
		getline(std::cin, input);
		name1 = input;
		std::cout << "Choose a name for fighter2: " << std::endl;
		getline(std::cin, input);
		name2 = input;
		std::cout << std::endl;
		//std::cout << std::endl;
		if (className == "FragTrap")
		{
			fighter1 = new FragTrap(name1);
			fighter2 = new FragTrap(name2);
			
		}
		else if (className == "ScavTrap")
		{
			fighter1 = new ScavTrap(name1);
			fighter2 = new ScavTrap(name2);

		}
		else if (className == "ClapTrap")
		{
			fighter1 = new ClapTrap(name1);
			fighter2 = new ClapTrap(name2);

		}
		if (className == "FragTrap")
			fightFrag(*((FragTrap*)fighter1), *(FragTrap*)fighter2);
		else if (className == "ScavTrap")
			fightScav(*((ScavTrap*)fighter1), *(ScavTrap*)fighter2);
		else if (className == "ClapTrap")
			fightClap(*((ClapTrap*)fighter1), *(ClapTrap*)fighter2);
			
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

	play();//ca serait cool que ca marche mais sinon je laisse le test au dessus cést deja bien
	return 0;
}
