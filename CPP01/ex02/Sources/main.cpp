/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:59:46 by malancar          #+#    #+#             */
/*   Updated: 2024/01/08 17:15:12 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF= brain;

	std::cout << "memory address of brain : " << &brain << std::endl;
	std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memeory address held by stringREF : " << &stringREF << std::endl;
	
	std::cout << "value of brain : " << brain << std::endl;
	std::cout << "value pointed to by : " << (*stringPTR) << std::endl;
	std::cout << "value pointed to by : " << stringREF << std::endl;
}
