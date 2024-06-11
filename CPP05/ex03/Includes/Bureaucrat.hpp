/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:47:10 by malancar          #+#    #+#             */
/*   Updated: 2024/06/10 18:03:34 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string const name);

		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		executeForm(AForm const& form) ; 
		
		
	
	private:
		int	_grade;
		std::string	const _name;
		
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
};

std::ostream& operator<<(std::ostream &flux, Bureaucrat bureaucrat);

#endif