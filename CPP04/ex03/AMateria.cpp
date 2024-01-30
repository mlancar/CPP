/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:29:37 by malancar          #+#    #+#             */
/*   Updated: 2024/01/30 16:33:59 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
	std::cout << "is created" << std::endl;
}

AMateria::AMateria(AMateria const& copy)
{
	std::cout << "is cloned" << std::endl;	
}

AMateria	&AMateria::operator=(AMateria const& rhs)
{
	
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "is destroyed" << std::endl;
}