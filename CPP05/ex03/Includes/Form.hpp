/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:55:08 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 19:18:10 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, int const gradeToSign, int const gradeToExecute);
		Form(Form const& copy);
		virtual ~Form();
		Form &operator=(Form const& rhs);

		std::string	const getName() const;
		bool	getSigned() const;
		int 	getGradeToSign() const;
		int 	getGradeToExecute() const;
		void	beSigned(Bureaucrat bureaucrat);
		void	signForm(Bureaucrat bureaucrat, Form &form);
		virtual void	execute(Bureaucrat const& executor) const;


	protected:
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
		class NotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &flux, Form &form);

#endif
