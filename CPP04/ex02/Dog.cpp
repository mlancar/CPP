/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:44:26 by malancar          #+#    #+#             */
/*   Updated: 2024/01/30 15:50:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << type << " is born" << std::endl;
}

Dog::Dog(Dog const& copy): AAnimal()
{
	type = copy.type;
	_brain = new Brain();//?
	std::cout << type << " is clone" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << type << " is killed" << std::endl;
}

Dog	&Dog::operator=(Dog const& rhs)
{
	type = rhs.type;
	return *this;
}

void	Dog::makeSound() const 
{
	std::cout << ": Woof" << std::endl;	
}
