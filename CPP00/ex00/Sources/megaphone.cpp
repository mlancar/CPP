/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:12:39 by malancar          #+#    #+#             */
/*   Updated: 2023/12/05 13:05:38 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	j = 0;
	while(av && av[i])
	{
		j = 0;
		while(av[i][j])
		{
			std::cout << (char)(toupper(av[i][j]));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}
