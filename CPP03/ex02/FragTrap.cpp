/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:48:56 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 13:11:48 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap()
{
	_className = "FragTrap";
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _className << " " << _name << " is created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	_name = copy._name;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	_className = copy._className;
	std::cout << _className << " " << _name << " is created with copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _className << " " << _name << " is destroyed" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys()
{
	std::cout << _name << " raises his hand to high five his opponent. He accepts your request" << std::endl;
	std::cout << " /o/ *HIGH FIVE* \\o\\" << std::endl;
	
}
