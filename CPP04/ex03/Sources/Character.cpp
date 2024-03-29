/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:15:34 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 16:16:56 by malancar         ###   ########.fr       */
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
	{
		if (rhs.inventory[i])
			inventory[i] = rhs.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
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
			std::cout << "Materia " << m->getType() << " is equiped" << std::endl;
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
		{
			std::cout << "materia " << inventory[idx]->getType() << " is unequiped" << std::endl;
			inventory[idx] = NULL;
			return ;
		}
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
