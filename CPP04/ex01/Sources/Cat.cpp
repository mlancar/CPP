/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:48:43 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:30:56 by malancar         ###   ########.fr       */
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
	std::cout << type << " is clone" << std::endl;
	type = copy.type;
	_brain = new Brain();
	*this = copy;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << type << " is killed" << std::endl;
}

Cat	&Cat::operator=(Cat const& rhs)
{
	std::cout << "Cat = operator" << std::endl;
	*_brain = *rhs._brain;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "My " << type <<  " says: Meow" << std::endl;
}
