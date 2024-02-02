/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:15:34 by malancar          #+#    #+#             */
/*   Updated: 2024/02/02 16:17:15 by malancar         ###   ########.fr       */
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
	std::cout << "is destroyed" << std::endl;
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
	inventory[idx] = NULL;//verifier si deja null
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx < 4 && idx >= 0) && inventory[idx])
		std::cout << "use " << inventory[idx]->getType() << " on " << target.getName() << std::endl;
}
