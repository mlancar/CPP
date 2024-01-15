/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:18:36 by malancar          #+#    #+#             */
/*   Updated: 2024/01/15 16:32:04 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	//std::cout << "Weapon default constructor" << std::endl;
}

Weapon::Weapon(const std::string &weaponType): _type(weaponType)
{
	//std::cout << "Weapon parameter constructor :" << _type << std::endl;
}

Weapon::~Weapon()
{
	//std::cout << "Weapon  destructor called : " << _type << std::endl;
}

const std::string&	Weapon::getType() const
{
	return _type;
}

void	Weapon::setType(const std::string &type)
{
	//std::cout << "_type = :" << _type << "type = " << type << std::endl;
	_type = type;
}