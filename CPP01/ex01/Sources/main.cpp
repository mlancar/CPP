/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:17:44 by malancar          #+#    #+#             */
/*   Updated: 2024/01/18 15:19:01 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie      *zombie;
    int			N = 10;
	
    if (N > 2000000 || N < 0)
        return 1;
    zombie = zombieHorde(N, "Marine");
    for (int i = 0; i < N; i++)
        zombie[i].announce();
    delete[]  zombie;
}