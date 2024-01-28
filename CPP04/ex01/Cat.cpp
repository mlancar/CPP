/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:48:43 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 20:04:50 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << type << " is born" << std::endl;
	
}

Cat::Cat(Cat const& copy): Animal()
{
	type = copy.type;
	_brain = new Brain();//?
	std::cout << type << " is clone" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << type << " is killed" << std::endl;
}

Cat	&Cat::operator=(Cat const& rhs)
{
	type = rhs.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << ": Meow" << std::endl;
}
