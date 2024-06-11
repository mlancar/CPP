/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:27:43 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 15:41:13 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(AForm const& copy) {
	(void)copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	try {
		AForm::execute(executor);
		std::cout << executor << " has been pardonned by Zaphod Beeblebox" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << &e << std::endl;
		
	}
}