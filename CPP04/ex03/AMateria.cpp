/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:29:37 by malancar          #+#    #+#             */
/*   Updated: 2024/02/01 18:29:54 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
	std::cout << type << "is created" << std::endl;
}

AMateria::AMateria(AMateria const& copy)
{
	std::cout << "is cloned" << std::endl;	
	*this = copy;
}

AMateria	&AMateria::operator=(AMateria const& rhs)
{
	type = rhs.type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "is destroyed" << std::endl;
}

const std::string	&AMateria::getType() const
{
	return type;
}
