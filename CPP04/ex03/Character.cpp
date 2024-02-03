/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:15:34 by malancar          #+#    #+#             */
/*   Updated: 2024/02/03 17:56:03 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name):_name(name)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	std::cout << _name << " is created" << std::endl;
}

Character::Character(Character const& copy)
{
	*this = copy;
	std::cout << _name << " is cloned" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << _name << " is destroyed" << std::endl;
}

Character	&Character::operator=(Character const& rhs)
{
	_name = rhs._name;
	for (int i = 0; i < 4;++i)
		inventory[i] = rhs.inventory[i]->clone();
	return *this;
}

const std::string &Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return;
		}
	}
	std::cout << "inventory is full " << std::endl;
		
}

void	Character::unequip(int idx)
{
	if (idx < 4)
	{
		if (inventory[idx] != NULL)
			inventory[idx] = NULL;
	}
	else
		std::cout << idx << " is not a slot of the inventory" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx < 4 && idx >= 0) && inventory[idx])
		inventory[idx]->use(target);
	else
		std::cout << idx << " is not a slot of the inventory" << std::endl;
	
}
