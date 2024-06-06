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

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	
}

AForm::~AForm()
{
}

AForm::AForm(AForm const& copy): _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
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

const std::string AForm::getName()
{
	return _name;
}

bool	AForm::getSigned()
{
	return _signed;
}

int AForm::getGradeToSign()
{
	return _gradeToSign;
}

int AForm::getGradeToExecute()
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

void	AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

void	AForm::signAForm(Bureaucrat bureaucrat, AForm &form)
{
	if (_signed == true)
		std::cout << bureaucrat << "signed" << form << std::endl;
	else
		std::cout << bureaucrat << "couldn't sign" << form << std::endl;
}

void	AForm::execute(Bureaucrat const& executor)
{
	beSigned(executor);
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
}