/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:16:54 by malancar          #+#    #+#             */
/*   Updated: 2024/02/01 17:34:41 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << type << " is created" << std::endl;
}

Ice::Ice(Ice const& copy)
{
    *this = copy;
    return *this;
}

Ice::~Ice()
{
    std::cout << type << " is destroyed" << std::endl;
}

Ice     &Ice::operator=(Ice const& rhs)
{
    type = copy.type;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target._name << std::endl;
}
