/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:55:08 by malancar          #+#    #+#             */
/*   Updated: 2024/06/06 16:35:23 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, int const gradeToSign, int const gradeToExecute);
		Form(Form const& copy);
		~Form();
		Form &operator=(Form const& rhs);

		std::string	const getName();
		bool	getSigned();
		int 	getGradeToSign();
		int 	getGradeToExecute();
		void	beSigned(Bureaucrat const& bureaucrat);

	private:
		Form();
		std::string const _name;
		bool	_signed;
		int  _gradeToSign;
		int  _gradeToExecute;

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FormIsSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &flux, Form Form);

#endif
