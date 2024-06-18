/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:33:14 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 18:57:37 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): AForm("RobotomyRequestForm", 72, 45), _target(target) {
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy): AForm("RobotomyRequestForm", 72, 45), _target(copy._target){
}


RobotomyRequestForm::~RobotomyRequestForm() {
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs) {
	_target = rhs._target;
	_signed = rhs._signed;
	return *this;
}

const char* RobotomyRequestForm::robotomyFailed::what() const throw()
{
	return " robotomy has failed";
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const{
	std::cout << "Bzzz rzzzz" << std::endl;
	AForm::execute(executor);
	std::srand(std::time(NULL)); // use current time as seed for random generator
	int random_value = std::rand();
	if (random_value % 2 == 0)
		std::cout << _target<< " has been robotomized successfully" << std::endl;
	else
		throw robotomyFailed();
}