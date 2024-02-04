/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:20:41 by malancar          #+#    #+#             */
/*   Updated: 2024/01/18 15:36:27 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): _name(name), _weapon(NULL)
{

}

HumanB::HumanB(const std::string &name, Weapon &weapon): _name(name), _weapon(&weapon)
{
	
}

HumanB::~HumanB()
{
    
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void	HumanB::attack() const
{
    //std::string weaponType = _weapon?_weapon->getType():"naked";
    std::string weaponType;
    if (_weapon)
        weaponType = _weapon->getType();
    else
        weaponType = "fists and sharp teeth and big foot";
    std::cout << _name << " attacks with their " << weaponType << std::endl;
}
