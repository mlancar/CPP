/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:47:20 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 15:34:20 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(int grade, std::string const name): _grade(grade), _name(name)
{
	
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy): _grade(copy._grade), _name (copy._name)
{	
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs._grade;
	return *this;
}

std::ostream& operator<<(std::ostream &flux, Bureaucrat bureaucrat)
{
	return flux << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
}

std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

void	Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
