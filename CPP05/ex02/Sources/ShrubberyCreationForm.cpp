/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:50:38 by malancar          #+#    #+#             */
/*   Updated: 2024/06/06 18:57:58 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy): AForm("ShrubberyCreationForm", 145, 137)
{
	(void)copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
	try
	{
		AForm::execute(executor);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
