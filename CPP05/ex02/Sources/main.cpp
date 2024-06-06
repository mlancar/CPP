/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:49:52 by malancar          #+#    #+#             */
/*   Updated: 2024/06/06 18:57:30 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat Floriane(100, "Floriane");
		ShrubberyCreationForm form;

		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "test catch" << std::endl;
	}
	
}