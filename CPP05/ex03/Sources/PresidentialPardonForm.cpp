/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:27:43 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 21:13:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): AForm("PresidentialPardonForm", 25, 5, target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy): AForm("PresidentialPardonForm", 25, 5, copy._target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	try {
		AForm::execute(executor);
		std::cout << _target << " has been pardonned by Zaphod Beeblebox" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << &e << std::endl;
	}
}