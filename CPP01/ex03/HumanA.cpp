/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:19:54 by malancar          #+#    #+#             */
/*   Updated: 2024/01/09 18:34:33 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon): _name(name), _weapon(weapon)
{
	
}

void	HumanA::attack() const
{
	std::cout << _name << "with their" << getType() << std::endl;
}
