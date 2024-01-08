/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:02:23 by malancar          #+#    #+#             */
/*   Updated: 2024/01/08 16:34:24 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  zombie("Foo");

    zombie.announce();
    Zombie  *zombie2;
    
    zombie2 = newZombie("Tsuki");
    zombie2->announce();
    delete zombie2;
}