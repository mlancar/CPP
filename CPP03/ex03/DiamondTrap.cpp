/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:07:24 by malancar          #+#    #+#             */
/*   Updated: 2024/01/26 18:28:02 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
	_hitPoints = 100;
	// className = "DiamonTrap";
	// DiamondTrap::_className = className;
	// _name = name;
	//std::cout << DiamondTrap::_className << " " << DiamondTrap::_name << " is created" << std::endl;

	// int hitPoints = FragTrap::_hitPoints;
	// int energyPoints = ScavTrap::_energyPoints;
	// int attackDamage = FragTrap::_attackDamage;
	// _hitPoints = hitPoints;
	// _energyPoints = energyPoints;
	// _attackDamage = attackDamage;

	// _hitPoints = FragTrap::_hitPoints;
	// _energyPoints = ScavTrap::_energyPoints;
	// _attackDamage = FragTrap::_attackDamage;

	//_hitPoints =  FragTrap::_hitPoints;
	// _energyPoints = ScavTrap::getEnergyPoints();
	// _attackDamage = FragTrap::getAttackDamage();
	
}

// DiamondTrap::DiamondTrap(DiamondTrap const &copy): ClapTrap(copy)
// {
// 	std::cout << _className << " " << _name << " is created with copy constructor" << std::endl;
// 	_name = copy._name;
// 	_energyPoints = copy._energyPoints;
// 	_attackDamage = copy._attackDamage;
// }

DiamondTrap::~DiamondTrap()
{
	//std::cout << _className << " " << _name << " is destroyed" << std::endl;
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

// int		DiamondTrap::getHitPoints()
// {
// 	return FragTrap::getHitPoints();
// }


// int		DiamondTrap::getEnergyPoints()
// {
// 	return ScavTrap::getEnergyPoints();
// }

// unsigned int	DiamondTrap::getAttackDamage()
// {
// 	return FragTrap::getAttackDamage();
// }

std::string	DiamondTrap::getName()
{
	return _name;
}
