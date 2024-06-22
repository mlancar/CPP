/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:35 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 19:18:37 by malancar         ###   ########.fr       */
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

Intern &Intern::operator=(Intern const& rhs) {
	(void)rhs;
	return *this;
}

AForm*	Intern::makeShrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::makeRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

AForm*	Intern::makePardon(std::string target) {
	return new PresidentialPardonForm(target);
}

const char* Intern::failCreateForm::what() const throw() {
	return "Intern failed to create form";
}

AForm*	Intern::makeForm(std::string form, std::string target) {
	AForm*	(Intern::*createForm[3])(std::string const form) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePardon};
	std::string formName[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	int i = 0;
	while (i < 3)
	{
		if (formName[i] == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			return (this->*createForm[i])(target);
		}
		i++;
	}
	throw failCreateForm();
	return 0;
}