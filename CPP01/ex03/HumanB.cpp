/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:20:41 by malancar          #+#    #+#             */
/*   Updated: 2024/01/10 00:36:03 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	_weapon = Weapon("stick");
}

void    HumanB::setWeapon(Weapon weapon)
{
    _weapon = weapon;
}

void	HumanB::attack() const
{
    std::cout << this->_name << "attacked" << std::endl;
}
