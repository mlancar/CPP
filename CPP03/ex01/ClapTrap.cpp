/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:28:30 by malancar          #+#    #+#             */
/*   Updated: 2024/01/23 19:03:20 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(): _name("qwerty"), _hitPoints(10), _energyPoints(10), _attackDamage(0), _className("ClapTrap")
{
	//std::cout << "Default constructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " is created with default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _className("ClapTrap")
{
	//std::cout << "Constructor called with name" << std::endl;
	std::cout << "ClapTrap " << _name << " is created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy):_name(copy._name), _hitPoints(copy._hitPoints),
_energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage), _className(copy._className)
{
	std::cout << "ClapTrap " << _name << " is created" << std::endl;
	//*this = copy;
}

ClapTrap::~ClapTrap()
{
	//std::cout << "Destructor called" << std::endl;
	std::cout << _name << " is destroyed" << std::endl;
}
ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

std::string	ClapTrap::getName()
{
	return _name;
}

unsigned int	ClapTrap::getAttackDamage()
{
	return _attackDamage;
}

int		ClapTrap::getHitPoints()
{
	return _hitPoints;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << _className << " " << _name << " attacks " << target << " with their bare hands" << std::endl;
	}
	else
		std::cout << _className << " " << _name << " tried to attack but not enought stamina" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints = _hitPoints - amount;
		std::cout << _className << " " << _name << " takes " << amount << " damage" << std::endl;
	}
	else
		std::cout << _className << " " << _name << " is dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints < 10)
	{
		if (_energyPoints > 0)
		{
			_hitPoints += amount;
			_energyPoints -= 1;
			std::cout << _className << " " << _name << " is repaired, healed:  " << amount << "HP" << std::endl;
		}
		else
			std::cout << _className << " " << _name << " tried to be repaired but not enought stamina" << std::endl;
	}
	else
		std::cout << _className << " " << _name << " tried to be repaired but life is full" << std::endl;
}

void	ClapTrap::displayState() const
{
	std::cout << _className << " " << _name << ": " << _hitPoints << "HP" << std::endl;
	std::cout << _className << " " << _name << ": " << _energyPoints << " stamina" << std::endl;
}

