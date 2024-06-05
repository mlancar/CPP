/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:49:52 by malancar          #+#    #+#             */
/*   Updated: 2024/06/05 17:34:19 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	try
	{
		Bureaucrat Floriane(148, "Floriane");
		std::cout << Floriane << std::endl;
		Floriane.decrementGrade();
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