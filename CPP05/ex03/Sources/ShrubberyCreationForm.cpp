/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:50:38 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 19:18:10 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137) {	

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy): Form("ShrubberyCreationForm", 145, 137) {
	(void)copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const{

	try
	{
		Form::execute(executor);
		std::string tree;
         
		tree = "  /\\\n /  \\\n/    \\\n  ||";
		std::ofstream outfile("target_shrubbery.txt");
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
