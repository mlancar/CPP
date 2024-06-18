/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:56:03 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 15:34:39 by malancar         ###   ########.fr       */
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

std::ostream& operator<<(std::ostream &flux, Form form)
{
	std::string form_signed;
	if (form.getSigned() == false)
		form_signed = "not signed";
	else
		form_signed = "signed";
	return flux << form.getName() << "\nForm is " << form_signed << "\ngrade to signed: " << form.getGradeToSign() << "\ngrade to execute: " << form.getGradeToExecute();
}

const std::string Form::getName()
{
	return _name;
}

bool	Form::getSigned()
{
	return _signed;
}

int Form::getGradeToSign()
{
	return _gradeToSign;
}

int Form::getGradeToExecute()
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

const char* Form::FormIsSigned::what() const throw() {
	return "form already signed";
}

void	Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (_signed == true)
		throw FormIsSigned();
	else if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_signed = true;
}
