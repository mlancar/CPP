/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:02:23 by malancar          #+#    #+#             */
/*   Updated: 2024/01/18 15:18:23 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  zombie("Foo");

    zombie.announce();
    Zombie  *otherZombie;
    
    otherZombie = newZombie("Tsuki");
    otherZombie->announce();
    delete otherZombie;
}
