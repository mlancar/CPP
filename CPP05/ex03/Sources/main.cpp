/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:49:52 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 18:14:51 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat boss = Bureaucrat(1, "Marine");
	Bureaucrat slave = Bureaucrat(46, "Mathieu");
	Bureaucrat conseillere = Bureaucrat(149, "la dame de Pole Emploi");
	Intern louis = Intern();

	try {
		AForm *shrub = louis.makeForm("shrubbery creation", "cluster 1");
		AForm *robob = louis.makeForm("robotomy request", "cluster 2");
		AForm *pres = louis.makeForm("presidential pardon", "cluster 3");
		//AForm *test = Benjamin.makeForm("test", "fou furieux");
			
		conseillere.executeForm(*shrub);
		slave.signForm(*shrub);
		conseillere.executeForm(*shrub);
		slave.executeForm(*shrub);
		boss.signForm(*robob);
		boss.signForm(*pres);
		slave.executeForm(*robob);
		boss.executeForm(*robob);
		boss.executeForm(*pres);
		
		delete robob;
		delete shrub;
		delete pres;
		
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}