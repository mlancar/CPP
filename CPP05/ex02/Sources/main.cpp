/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:49:52 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 17:34:43 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// try
	// {
	// 	//check grade too low too high
	// 	Bureaucrat Floriane(30, "Floriane");
	// 	ShrubberyCreationForm form("target");
	// 	RobotomyRequestForm roboForm("target");
	// 	form.beSigned(Floriane);
	// 	form.execute(Floriane);

	// 	roboForm.beSigned(Floriane);
	// 	roboForm.execute(Floriane);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// 	std::cout << "test catch" << std::endl;
	// }
	Bureaucrat boss = Bureaucrat(1, "Marine");
	Bureaucrat slave = Bureaucrat(46, "Mathieu");
	Bureaucrat dame = Bureaucrat(148, "La dame de Pole Emploi");
	
	std::cout << std::endl;

	ShrubberyCreationForm shrub = ShrubberyCreationForm("foret");
	RobotomyRequestForm robob = RobotomyRequestForm("");
	PresidentialPardonForm pres = PresidentialPardonForm("Mathieu");

	std::cout << std::endl;

	dame.executeForm(shrub);
	slave.signForm(shrub);
	slave.executeForm(shrub);
	boss.signForm(robob);
	boss.signForm(pres);
	slave.executeForm(robob);
	boss.executeForm(robob);
	boss.executeForm(pres);
	
	std::cout << std::endl;

	
}