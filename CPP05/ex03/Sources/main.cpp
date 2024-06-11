/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:49:52 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 21:14:26 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		//check grade too low too high
		Bureaucrat Floriane(30, "Floriane");
		ShrubberyCreationForm form("target");
		RobotomyRequestForm roboForm("target");
		form.beSigned(Floriane);
		form.execute(Floriane);

		roboForm.beSigned(Floriane);
		roboForm.execute(Floriane);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "test catch" << std::endl;
	}
	return 0;
}