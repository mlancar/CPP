/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:35 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 20:03:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern(Intern const& copy) {
	(void)copy;
}

Intern::~Intern() {
	
}

Form*	Intern::makeShrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

Form*	Intern::makePardon(std::string target) {
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeForm(std::string form, std::string target) {
	(void)target;//c'est quoi target ? un bureaucrat ?>:(

	Form*	(Intern::*createForm[3])(std::string target) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePardon};
	std::string formName[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	int i = 3;
	while (i < 3)
	{
		if (form == formName[i])
		{
			std::cout << "Intern creates " << form << std::endl;
			return (this->*createForm[i])(target);
			
		}
	}
	// if (form == "shruberry Creation")
	// {
		
	// 	std::cout << "Intern creates " << form << std::endl;
		
	// 	return new ShrubberyCreationForm;
	// }
	// else if (form == "robotomy request")
	// {
	// 	std::cout << "Intern creates " << form << std::endl;
	// 	return new RobotomyRequestForm;	
	// }
	// else if (form == "presidential pardon")
	// {
	// 	std::cout << "Intern creates " << form << std::endl;
	// 	return new PresidentialPardonForm;
	// }
	
}