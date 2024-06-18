/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:56:03 by malancar          #+#    #+#             */
/*   Updated: 2024/06/06 16:47:52 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
{
}

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExecute, std::string const target): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target)
{
	
}

AForm::~AForm()
{
}

AForm::AForm(AForm const& copy): _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _target(copy._target)
{
	
}

AForm &AForm::operator=(AForm const& rhs)
{
	//_name = rhs._name;
	_signed = rhs._signed;
	// _gradeToSign = rhs._gradeToSign;
	// _gradeToExecute = rhs._gradeToExecute;
	
	return *this;
}

std::ostream& operator<<(std::ostream &flux, AForm &form)
{
	return flux << form.getName() << "\nAForm is signed: " << form.getSigned() << "\ngrade to signed: " << form.getGradeToSign() << "\ngrade to execute: " << form.getGradeToExecute();
}

const std::string AForm::getName() const
{
	return _name;
}

bool	AForm::getSigned() const
{
	return _signed;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* AForm::FormIsSigned::what() const throw() {
	return "form already signed";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "Form not sign";
}

void	AForm::beSigned(Bureaucrat const& bureaucrat)
{
	if (_signed == true)
		throw FormIsSigned();
	else if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_signed = true;
}

void	AForm::execute(Bureaucrat const& executor) const
{
	if (_signed == false)
	{
		throw AForm::NotSignedException();
	}
	else if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
}