/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:33:14 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 19:18:10 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45) {
	
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
		Form::execute(executor);
		std::srand(std::time(NULL)); // use current time as seed for random generator
		int random_value = std::rand();
		if (random_value % 2 == 0)
			std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
		else
			throw robotomyFailed();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}