/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:26 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 17:59:49 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const& copy);
		~Intern();

		AForm*	makeForm(std::string form, std::string target);
		AForm*	makeShrubbery(std::string target);
		AForm*	makeRobotomy(std::string target);
		AForm*	makePardon(std::string target);

		class failCreateForm : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif