/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:50:38 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 21:02:14 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm() {	

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): AForm("ShrubberyCreationForm", 145, 137, target) {	

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy): AForm("ShrubberyCreationForm", 145, 137, copy._target) {
	(void)copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const{

	try
	{
		AForm::execute(executor);
		std::string tree;
		std::string target = _target + "shrubbery";
         
		tree = "  /\\\n /  \\\n/    \\\n  ||";
		std::ofstream outfile(target.c_str());
		if (outfile.is_open())
			outfile << tree <<std::endl;
		else
			outfile.exceptions(std::ofstream::failbit);
		outfile.close();
			
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
