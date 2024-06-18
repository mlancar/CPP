/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:49:52 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 15:39:25 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try {
		Form paper1 = Form("test1", 0 , 149);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form paper2 = Form("test2", 1 , 151);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat boss = Bureaucrat(1, "Marine");
	Bureaucrat slave = Bureaucrat(150, "Mathieu");
	Bureaucrat dame = Bureaucrat(149, "La dame de Pole Emploi");
	std::cout << std::endl;

	Form confidential_file("Droit au chomage", 149, 150);

	std::cout << std::endl;
	std::cout << confidential_file << std::endl;
	std::cout << std::endl;

	try {
		confidential_file.beSigned(slave);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	slave.signForm(confidential_file);
	dame.signForm(confidential_file);
	boss.signForm(confidential_file);	
	std::cout << std::endl;
	std::cout << confidential_file << std::endl;
	std::cout << std::endl;

	return 0;
}