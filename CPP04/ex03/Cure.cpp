/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:56:43 by malancar          #+#    #+#             */
/*   Updated: 2024/02/02 15:01:25 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << type << " is created" << std::endl;
}

Cure::Cure(Cure const& copy): AMateria("cure")
{
    *this = copy;
}

Cure::~Cure()
{
    std::cout << type << " is destroyed" << std::endl;
}

Cure    &Cure::operator=(Cure const& rhs)
{
    type = rhs.type;
    return *this;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << " wound's *" << std::endl;//getName ?
}

AMateria *Cure::clone() const
{
    return new Cure();
}
