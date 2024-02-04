/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:16:54 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 16:18:24 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    //std::cout << type << " is created" << std::endl;
}

Ice::Ice(Ice const& copy): AMateria("ice")
{
    (void)copy;
}

Ice::~Ice()
{
    //std::cout << type << " is destroyed" << std::endl;
}

Ice     &Ice::operator=(Ice const& rhs)
{
    (void)rhs;
    return *this;
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria *Ice::clone() const
{
    return new Ice();
}
