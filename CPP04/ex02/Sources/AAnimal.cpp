/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:44:44 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:59:42 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << type << " is created" << std::endl;
}

AAnimal::AAnimal(AAnimal const& copy): type(copy.type)
{
	std::cout << type << " is cloned" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << type << " is destroyed" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const& rhs)
{
	type = rhs.type;
	return *this;
}

std::string	AAnimal::getType() const
{
	return type;
}
