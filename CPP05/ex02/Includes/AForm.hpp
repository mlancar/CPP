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

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string const name, int const gradeToSign, int const gradeToExecute);
		AForm(AForm const& copy);
		virtual ~AForm();
		AForm &operator=(AForm const& rhs);

		std::string	const getName() const;
		bool	getSigned() const;
		int 	getGradeToSign() const;
		int 	getGradeToExecute() const;
		void	beSigned(Bureaucrat const& bureaucrat);
		virtual void	execute(Bureaucrat const& executor) const = 0;


	protected:
		AForm();
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
		class NotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &flux, AForm &form);

#endif
