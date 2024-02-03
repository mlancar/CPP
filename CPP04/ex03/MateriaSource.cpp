/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:53:26 by malancar          #+#    #+#             */
/*   Updated: 2024/02/03 17:48:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i =  0; i < 4; ++i)
	{
		inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const& copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{

	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const& rhs)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	for (int i = 0;i < 4; ++i)
	{
		inventory[i] = rhs.inventory[i];
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << "learn new materia " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "cannot learn new materia" << std::endl;
	
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4;++i)
	{
		if (inventory[i] && inventory[i]->getType() == type)
		{
			return inventory[i]->clone();
			std::cout << "create new materia " << type << std::endl;
		}
	}
	std::cout << "cannot create new materia" << std::endl;

	return 0;
}
