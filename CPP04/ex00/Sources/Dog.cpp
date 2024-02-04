/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:44:26 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:30:23 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	type = "Dog";
	std::cout << type << " is born" << std::endl;
}

Dog::Dog(Dog const& copy): Animal()
{
	type = copy.type;
	std::cout << type << " is clone" << std::endl;
}

Dog::~Dog()
{
	std::cout << type << " is killed" << std::endl;

}

Dog	&Dog::operator=(Dog const& rhs)
{
	type = rhs.type;
	return *this;
}

void	Dog::makeSound() const 
{
	std::cout << "My " << type <<  " says: Woof" << std::endl;	
}
