/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:03:07 by malancar          #+#    #+#             */
/*   Updated: 2024/01/18 15:35:51 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
    
}

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout << _name << " killed" << std::endl;
}

void  Zombie::setName(std::string &name)
{
    _name = name;
}
void    Zombie::announce()
{
    
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}