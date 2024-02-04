/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:35:19 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:31:39 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Wrong Animal")
{
	std::cout << type << " is created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy): type(copy.type)
{
	std::cout << type << " is clone" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " is destroyed" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const& rhs)
{
	type = rhs.type;
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "My " << type <<  " says: wrong sound" << std::endl;
}
