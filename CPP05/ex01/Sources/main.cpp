/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:49:52 by malancar          #+#    #+#             */
/*   Updated: 2024/06/06 17:05:30 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

int main()
{

	try
	{
		Bureaucrat Floriane(100, "Floriane");
		AForm AForm("A", 100, 50);

		std::cout << AForm << std::endl;
		std::cout << Floriane << std::endl;
		AForm.beSigned(Floriane);
		std::cout << AForm << std::endl;
		Floriane.decrementGrade();
		AForm.beSigned(Floriane);
		
		std::cout << Floriane << std::endl;
		Floriane.decrementGrade();
		std::cout << Floriane << std::endl;
		Floriane.decrementGrade();
		std::cout << Floriane << std::endl;
		std::cout << "test" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "test catch" << std::endl;
	}
	
}