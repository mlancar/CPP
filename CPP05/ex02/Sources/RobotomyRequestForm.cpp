/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:33:14 by malancar          #+#    #+#             */
/*   Updated: 2024/06/10 18:32:40 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45) {
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) {
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
	if (((std::rand() % 2) ) == 0)//ca marche pas je suis debile
		std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
	else
		throw robotomyFailed();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}