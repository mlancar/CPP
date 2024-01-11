/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:17:44 by malancar          #+#    #+#             */
/*   Updated: 2024/01/11 14:20:53 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie      *zombie;
    int			N = 2000000000;
	
	try
    {
        zombie = zombieHorde(N, "Marine");
    }
    catch(std::exception &error)
    {
        std::cout << error.what() << std::endl;
        return 1;   
    }
    zombie->announce();
    delete[]  zombie;
}