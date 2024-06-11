/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:33:14 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 21:03:33 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm() {
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): AForm("RobotomyRequestForm", 72, 45, target) {
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy): AForm("RobotomyRequestForm", 72, 45, copy._target) {
	(void)copy;
}


RobotomyRequestForm::~RobotomyRequestForm() {
	
}

const char* RobotomyRequestForm::robotomyFailed::what() const throw()
{
	return " robotomy has failed";
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const{
	
	try {
		std::cout << "Bzzz rzzzz" << std::endl;
		AForm::execute(executor);
		std::srand(std::time(NULL)); // use current time as seed for random generator
		int random_value = std::rand();
		if (random_value % 2 == 0)
			std::cout << _target<< " has been robotomized successfully" << std::endl;
		else
			throw robotomyFailed();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}