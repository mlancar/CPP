/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:48:43 by malancar          #+#    #+#             */
/*   Updated: 2024/01/30 15:50:20 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << type << " is born" << std::endl;
	
}

Cat::Cat(Cat const& copy): AAnimal()
{
	//type = copy.type;
	_brain = new Brain();//?
	//*this = copy;//appelle operateur = qui copie deja tout
	_brain = copy._brain;
	std::cout << type << " is clone" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << type << " is killed" << std::endl;
}

Cat	&Cat::operator=(Cat const& rhs)
{
	//type = rhs.type;
	_brain = rhs._brain;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << ": Meow" << std::endl;
}
