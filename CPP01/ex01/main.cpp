/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:17:44 by malancar          #+#    #+#             */
/*   Updated: 2024/01/08 16:56:49 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie      *zombie;
    int			N = 10;
	
	zombie = zombieHorde(N, "Marine");
	if (!zombie)
		return 1;
    zombie->announce();
    delete[]  zombie;
}