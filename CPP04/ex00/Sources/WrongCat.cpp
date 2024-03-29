/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:41:27 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:31:45 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	type = "Wrong Cat";
	std::cout << type << " is born" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy): WrongAnimal()
{
	type = copy.type;
	std::cout << type << " is clone" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << " is killed" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const& rhs)
{
	type = rhs.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "My " << type <<  " says: wrong meow" << std::endl;
}
