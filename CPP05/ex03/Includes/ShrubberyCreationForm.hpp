/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:50:30 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 20:55:12 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const& copy);
		~ShrubberyCreationForm();

	void execute(Bureaucrat const& executor) const;
	void createFile();

		//ShrubberyCreationForm();
};

#endif