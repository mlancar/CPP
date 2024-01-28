/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:07:24 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 18:17:10 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(), ScavTrap(name), FragTrap(name)
{
	_hitPoints = 100;
	_attackDamage = 30;
	_energyPoints = 50;
	_className = "DiamondTrap";
	ClapTrap::_name = name + "clap_name";
	_name = name;
	
	//_hitPoints =  FragTrap::_hitPoints;
	// _energyPoints = ScavTrap::getEnergyPoints();
	// _attackDamage = FragTrap::getAttackDamage();
	std::cout << _className << " " << _name << " is created" << std::endl;
	
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	_name = copy._name;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	_className = copy._className;
	std::cout << _className << " " << _name << " is created with copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	//std::cout << _className << " " << _name << " is destroyed" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

int		DiamondTrap::getHitPoints()
{
	return _hitPoints;
}


int		DiamondTrap::getEnergyPoints()
{
	return _energyPoints;
}

unsigned int	DiamondTrap::getAttackDamage()
{
	return _attackDamage;	
}

std::string	DiamondTrap::getName()
{
	return _name;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My real name is " << ClapTrap::_name << std::endl;
}
