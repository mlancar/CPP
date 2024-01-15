/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:17:44 by malancar          #+#    #+#             */
/*   Updated: 2024/01/15 15:18:53 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie      *zombie;
    int			N = 20;
	
    //if (N < Zombie::_limitMin || N > _limitMax)
    if (N < 0 || N > 500)
        return 1;
    zombie = zombieHorde(N, "Marine");
    zombie->announce();
    delete[]  zombie;
}