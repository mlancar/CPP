/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:33:00 by malancar          #+#    #+#             */
/*   Updated: 2024/01/15 18:46:53 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::string		fileName = av[1];
	std::ifstream	file(fileName);
	std::ofstream 	fileReplace(fileName + ".replace");
	
	if (file)
	{
		while (!file.eof())
		{
			std::string	line;
			getline(file, line);
			fileReplace << line << std::endl;	
		}
	}
	else
		std::cout << "cannot open" << std::endl;
	
	
}