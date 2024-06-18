/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:50:38 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 18:57:51 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm() {	

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {	

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy): AForm("ShrubberyCreationForm", 145, 137), _target(copy._target) {
	(void)copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs) {
	_target = rhs._target;
	_signed = rhs._signed;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const{

	AForm::execute(executor);
	
	std::string tree;
	std::string target = _target + "_shrubbery";
		
	tree = "  /\\\n /  \\\n/    \\\n  ||";
	std::ofstream outfile(target.c_str());
	if (outfile.is_open())
		outfile << tree <<std::endl;
	else
		outfile.exceptions(std::ofstream::failbit);
	outfile.close();
}
