/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:48:56 by malancar          #+#    #+#             */
/*   Updated: 2024/01/26 15:26:58 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap()
{
	_className = "FragTrap";
	_name = name;
	std::cout << _className << " " << _name << " is created with default constructor" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << _className << " " << _name << " is created with copy constructor" << std::endl;
	_name = copy._name;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

FragTrap::~FragTrap()
{
	std::cout << _className << " " << _name << " is destroyed" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << _name << " raises his hand to high five his opponent. He accepts your request" << std::endl;
	std::cout << " /o/ *HIGH FIVE* \\o\\" << std::endl;
	
}

void FlagTrap::action()
{
	highFivesGuys();
}
