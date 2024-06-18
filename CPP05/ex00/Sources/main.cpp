/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:49:52 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 14:42:35 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	try {
		Bureaucrat Bardella(149, "Bardella");
		
		std::cout << Bardella << std::endl;
		Bardella.decrementGrade();
		std::cout << Bardella << std::endl;
		Bardella.decrementGrade();
		std::cout << Bardella << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat Macron(1, "Macron");
		
		std::cout << Macron << std::endl;
		Macron.incrementGrade();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}