/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:18:36 by malancar          #+#    #+#             */
/*   Updated: 2024/01/10 00:58:51 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string weapon)
{
	std::cout << weapon << std::endl;
}

Weapon::~Weapon()
{
	
}

const std::string&	Weapon::getType() const
{
	return _type;
}