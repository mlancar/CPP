/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:20:41 by malancar          #+#    #+#             */
/*   Updated: 2024/01/10 02:24:08 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	_weapon = Weapon("stick");
}

HumanB::~HumanB()
{

}

void    HumanB::setWeapon(Weapon weapon)
{
    _weapon = weapon;
}

void	HumanB::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
