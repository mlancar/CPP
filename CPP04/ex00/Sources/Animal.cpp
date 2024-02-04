/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:44:44 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:31:35 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << type << " is created" << std::endl;
}

Animal::Animal(Animal const& copy): type(copy.type)
{
	std::cout << type << " is cloned" << std::endl;
}

Animal::~Animal()
{
	std::cout << type << " is destroyed" << std::endl;
}

Animal	&Animal::operator=(Animal const& rhs)
{
	type = rhs.type;
	return *this;
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << "My " << type <<  " says: sound" << std::endl;
}
