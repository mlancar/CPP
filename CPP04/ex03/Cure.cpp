/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:56:43 by malancar          #+#    #+#             */
/*   Updated: 2024/02/01 17:34:35 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << type << "is created" << std::endl;
}

Cure::cure(Cure const& copy)
{
    *this = copy;
    return *this;
}

Cure::~cure()
{
    std::cout << type << " is destroyed" << std::endl;
}

Cure    &Cure::operator=(Cure const& rhs)
{
    type = copy.type;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target._name << " wound's *" << std::endl;
}
