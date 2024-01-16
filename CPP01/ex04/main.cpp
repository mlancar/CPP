/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:33:00 by malancar          #+#    #+#             */
/*   Updated: 2024/01/16 20:15:07 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <filesystem>

int	main(int ac, char **av)
{
	if (ac < 3)
		return 1;
	//gestion d'erreur mieux
	std::basic_string<char>::size_type	position = 0;
	std::string		toFind = av[2];
	std::string		toReplace = av[3];
	std::string		replaceName = av[1];
	replaceName += ".replace";
	std::ifstream	file(av[1]);
	std::ofstream 	fileReplace(replaceName.c_str());
	int				start = 0;
	int				len = 0;
	std::string		line;

	if (file)
	{
		while (!file.eof())
		{
			getline(file, line);
			start = 0;
				do {
					position = line.find(toFind);
					len = toFind.length();
					if (position != std::string::npos)
					{
						position += len;
						fileReplace << line.substr(start, position - len)  << toReplace;
					}
					if (position != std::string::npos)
						line = line.substr(position);
				}
				while (position != std::string::npos);
				fileReplace << line;
				if (!(file.std::ios::eof()))
					fileReplace << std::endl;
		}
	}
	else
		std::cout << "cannot open" << std::endl;
	
	
}