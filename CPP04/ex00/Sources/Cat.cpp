/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:48:43 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:30:05 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	std::cout << type << " is born" << std::endl;
	
}

Cat::Cat(Cat const& copy): Animal()
{
	type = copy.type;
	std::cout << type << " is clone" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " is killed" << std::endl;
}

Cat	&Cat::operator=(Cat const& rhs)
{
	type = rhs.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "My " << type <<  " says: Meow" << std::endl;
}
