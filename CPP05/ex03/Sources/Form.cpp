/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:56:03 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 19:17:24 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	
}

Form::~Form()
{
}

Form::Form(Form const& copy): _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	
}

Form &Form::operator=(Form const& rhs)
{
	//_name = rhs._name;
	_signed = rhs._signed;
	// _gradeToSign = rhs._gradeToSign;
	// _gradeToExecute = rhs._gradeToExecute;
	
	return *this;
}

std::ostream& operator<<(std::ostream &flux, Form &form)
{
	return flux << form.getName() << "\nForm is signed: " << form.getSigned() << "\ngrade to signed: " << form.getGradeToSign() << "\ngrade to execute: " << form.getGradeToExecute();
}

const std::string Form::getName() const
{
	return _name;
}

bool	Form::getSigned() const
{
	return _signed;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Form::NotSignedException::what() const throw()
{
	return "Form not sign";
}

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

void	Form::signForm(Bureaucrat bureaucrat, Form &form)
{
	if (_signed == true)
		std::cout << bureaucrat << "signed" << form << std::endl;
	else
		std::cout << bureaucrat << "couldn't sign" << form << std::endl;
}

void	Form::execute(Bureaucrat const& executor) const
{
	if (_signed == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
}