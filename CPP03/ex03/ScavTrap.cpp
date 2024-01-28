/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:27:58 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 13:10:52 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_className = "ScavTrap";
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _className << " " << _name << " is created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	_name = copy._name;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	_className = copy._className;
	std::cout << _className << " " << _name << " is created with copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _className << " " << _name << " is destroyed" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

int		ScavTrap::getEnergyPoints()
{
	return _energyPoints;
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
