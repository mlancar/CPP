/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:07:24 by malancar          #+#    #+#             */
/*   Updated: 2024/01/25 21:32:49 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ScavTrap(), FragTrap()
{
	_className = "DiamondTrap";
	_name = name;
	std::cout << _className << " " << _name << " is created with default constructor" << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
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
	std::cout << _className << " " << _name << " is destroyed" << std::endl;
}
