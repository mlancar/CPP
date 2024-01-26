/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:27:58 by malancar          #+#    #+#             */
/*   Updated: 2024/01/26 00:14:07 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
	_className = "ScavTrap";
	_name = name;
	std::cout << _className << " " << _name << " is created with default constructor" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << _className << " " << _name << " is created with copy constructor" << std::endl;
	_name = copy._name;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << _className << " " << _name << " is destroyed" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (_energyPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << _className << " " << _name << " attacks " << target << " with his axe" << std::endl;
	}
	else
		std::cout << _name << ": not enought stamina" << std::endl;

}

void	ScavTrap::guardGate()
{
	//peut etre quand en guardmode le fighter prend moitie de degat? 
	if (_energyPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << _className << " " << _name << " is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << _name << ": not enought stamina" << std::endl;
		
}

void	ScavTrap::winner(ScavTrap &fighter1, ScavTrap &fighter2)
{
	std::string	winner = fighter1.getName();
	std::string	loser = fighter2.getName();
	
	if (fighter2.getHitPoints() > fighter1.getHitPoints())
	{
		winner = fighter2.getName();
		loser = fighter1.getName();
	}
	std::cout << loser << " KO" << std::endl;
	std::cout << winner << " WIN!" << std::endl;
}

void ScavTrap::action() {
	guardGate();
}