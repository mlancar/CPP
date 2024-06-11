/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:26 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 20:00:49 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const& copy);
		~Intern();

		Form*	makeForm(std::string form, std::string target);
		Form*	makeShrubbery(std::string target);
		Form*	makeRobotomy(std::string target);
		Form*	makePardon(std::string target);
	

	
};

#endif