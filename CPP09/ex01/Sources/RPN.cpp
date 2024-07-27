/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:16:09 by malancar          #+#    #+#             */
/*   Updated: 2024/07/27 19:24:45 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
	
}

RPN::RPN(RPN const& copy) {
	(void)copy;
}

RPN::~RPN() {
	
}

RPN&	RPN::operator=(RPN const& rhs) {
	
	(void)rhs;
	return *this;
}


void	RPN::addition() {

	int tmp = _rpn.top();
	_rpn.pop();
	_sumValue =_rpn.top() + tmp;
	_rpn.pop();
	_rpn.push(_sumValue);
}

void	RPN::substraction() {

	int tmp = _rpn.top();
	_rpn.pop();
	_sumValue =_rpn.top() - tmp;
	_rpn.pop();
	_rpn.push(_sumValue);
}

void	RPN::multiplication() {

	int tmp = _rpn.top();
	_rpn.pop();
	_sumValue =_rpn.top() * tmp;
	_rpn.pop();
	_rpn.push(_sumValue);
}

void	RPN::division() {

	int tmp = _rpn.top();
	if (tmp == 0)
		throw std::invalid_argument("Error");
	_rpn.pop();
	_sumValue =_rpn.top() / tmp;
	_rpn.pop();
	_rpn.push(_sumValue);
}

// check division par zero
void	RPN::casio90plusE(char *arg) {
	
	std::stringstream inputStream(arg);
	std::string input;
	int inputNumber;
	_sumValue = 0;

	while (inputStream >> input) {
		inputNumber = atoi(input.c_str());
		if (inputNumber == 0 && input != "0")
		{
			if (input != "+" && input != "-" && input != "*" && input != "/")
				throw std::invalid_argument("Bad input: " + input + "\nOperator allowed: '+', '-', '/' or '*'");
			else if (input == "+" && _rpn.size() > 1)
				addition();
			else if (input == "-" && _rpn.size() > 1)
				substraction();
			else if (input == "*" && _rpn.size() > 1)
				multiplication();
			else if (input == "/" && _rpn.size() > 1)
				division();
			else
				throw std::invalid_argument("Error");
		}
		else {
			if (input != "0" && (inputNumber <= 0 || inputNumber > 9)) {
				throw std::invalid_argument("Bad input: " + input + "\nExpected number between 0 and 9");
			}
			else
				_rpn.push(inputNumber);
		}
	}
	if (_rpn.size() > 0)
		std::cout << _rpn.top() << std::endl;
}
