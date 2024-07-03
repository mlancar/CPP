/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:16:09 by malancar          #+#    #+#             */
/*   Updated: 2024/07/03 19:38:29 by malancar         ###   ########.fr       */
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

void	RPN::parseInput(char *arg) {
	
	std::stringstream inputStream(arg);
	std::string input;
	int inputNumber;

	//check que chaque input soit separe d'un seul espace ?
	while (inputStream >> input) {
		//std::cout << input << std::endl;
		inputNumber = atoi(input.c_str());
		if (!inputNumber)
		{
			//std::cout << "is not digit = " << input << std::endl;
			if (input != "+" && input != "-" && input != "/" && input != "*")
				throw std::invalid_argument("Bad input: " + input + "\nOperator allowed: '+', '-', '/' or '*'");
		}
		else {
			if (inputNumber < 0 || inputNumber > 9) {
				throw std::invalid_argument("Bad input: " + input + "\nExpected number between 0 and 9");
			}
		}
		_rpn.push_back(input);
	}
	//std::cout << std::endl;
	// for (std::vector<std::string>::iterator it = _rpn.begin(); it != _rpn.end(); it++) {
	// 	std::cout << "vector = " << *it << std::endl;
	// }
}

void	RPN::casio90plusE() {
	
	int sumValue = 0;
	//faire dans une boucle qui appelle les bonnes condition aux bons moments
	//parce que la ca marcghe pas si les operateurs sont pas dans cet ordre
	//mais on a une bonne base je pense
	std::vector<std::string>::iterator itPlus = find(_rpn.begin(), _rpn.end(), "+");
	std::vector<std::string>::iterator itStart = _rpn.begin();
	if (itPlus != _rpn.end()) {
		for (std::vector<std::string>::iterator it = itStart; it != itPlus; it++) {
			sumValue += atoi((*it).c_str());			
		}
		itStart = itPlus + 1;
	}
	std::cout << "+ result = " << sumValue << std::endl;
	std::vector<std::string>::iterator itMinus = find(_rpn.begin(), _rpn.end(), "-");
	if (itMinus != _rpn.end()) {
		for (std::vector<std::string>::iterator it = itStart; it != itMinus; it++) {
			sumValue -= atoi((*it).c_str());
		}
		itStart = itMinus + 1;
	}
	std::cout << "- result = " << sumValue << std::endl;
	std::vector<std::string>::iterator itMultiply = find(_rpn.begin(), _rpn.end(), "*");
	if (itMultiply != _rpn.end()) {
		for (std::vector<std::string>::iterator it = itStart; it != itMultiply; it++) {
			sumValue *= atoi((*it).c_str());
		}
		itStart = itMultiply + 1;
	}
	std::cout << "* result = " << sumValue << std::endl;

	std::vector<std::string>::iterator itDivide = find(_rpn.begin(), _rpn.end(), "/");
	if (itDivide != _rpn.end()) {
		for (std::vector<std::string>::iterator it = itStart; it != itDivide; it++) {
			sumValue /= atoi((*it).c_str());			
		}
		itStart = itDivide + 1;
	}
	std::cout << "/ result = " << sumValue << std::endl;
}