/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:56:43 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 16:17:58 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    //std::cout << type << " is created" << std::endl;
}

Cure::Cure(Cure const& copy): AMateria("cure")
{
   (void)copy;
}

Cure::~Cure()
{
    //std::cout << type << " is destroyed" << std::endl;
}

Cure    &Cure::operator=(Cure const& rhs)
{
    (void)rhs;
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
