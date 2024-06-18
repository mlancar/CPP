/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:27:43 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 18:56:00 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy): AForm("PresidentialPardonForm", 25, 5), _target(copy._target) {
	(void)copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs) {
	_target = rhs._target;
	_signed = rhs._signed;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	AForm::execute(executor);
	std::cout << _target << " has been pardonned by Zaphod Beeblebox" << std::endl;
}