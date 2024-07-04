/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:16:09 by malancar          #+#    #+#             */
/*   Updated: 2024/07/04 22:24:57 by malancar         ###   ########.fr       */
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
		inputNumber = atoi(input.c_str());
		if (!inputNumber && input != "0")
		{
			if (input != "+" && input != "-" && input != "/" && input != "*")
				throw std::invalid_argument("Bad input: " + input + "\nOperator allowed: '+', '-', '/' or '*'");
			if (std::stack )
		}
		else {
			if (inputNumber < 0 || inputNumber > 9) {
				throw std::invalid_argument("Bad input: " + input + "\nExpected number between 0 and 9");
			}
		}
		
		_rpn.push(input);
		
	}
}

void	RPN::casio90plusE() {
		
}

// void	RPN::casio90plusE() {
	
// 	int sumValue = 0;
// 	std::list<std::string>::iterator itPlus = find(_rpn.begin(), _rpn.end(), "+");
// 	std::list<std::string>::iterator itStart = _rpn.begin();
// 	std::list<std::string>::iterator itMinus = find(_rpn.begin(), _rpn.end(), "-");
// 	std::list<std::string>::iterator itMultiply = find(_rpn.begin(), _rpn.end(), "*");
// 	std::list<std::string>::iterator itDivide = find(_rpn.begin(), _rpn.end(), "/");
	
// 	for (std::list<std::string>::iterator iterator = _rpn.begin(); iterator != _rpn.end();iterator++) {
// 		if (*iterator == "+") {
// 			if (itStart != _rpn.begin()) {
// 				for (std::list<std::string>::iterator it = itStart; it != itPlus; it++) {
// 					sumValue += atoi((*it).c_str());
// 			}
// 			itStart = itPlus;
// 			itStart++;
// 			itPlus = find(itStart, _rpn.end(), "+");
// 			}
// 			//std::cout << "+ result = " << sumValue << std::endl;
// 		}
// 		else if (*iterator == "-") {
// 			if (itStart != itMinus) {
// 				for (std::list<std::string>::iterator it = itStart; it != itMinus; it++) {
// 					if (it == _rpn.begin())
// 					sumValue += atoi((*it).c_str());
// 				else
// 					sumValue -= atoi((*it).c_str());
// 				//std::cout << "- result = " << sumValue << std::endl;
				
// 			}
// 			itStart = itMinus;
// 			itStart++;
// 			itMinus = find(itStart, _rpn.end(), "-");

// 		}
// 		}
// 		else if (*iterator == "*") {
// 			if (itStart != itMultiply) {
// 				for (std::list<std::string>::iterator it = itStart; it != itMultiply; it++) {
// 					if (it == _rpn.begin())
// 						sumValue = 1;
// 					sumValue *= atoi((*it).c_str());
// 				}
// 				itStart = itMultiply;
// 				itStart++;
// 				itMultiply = find(itStart, _rpn.end(), "*");
// 			}
// 			//std::cout << "* result = " << sumValue << std::endl;
// 		}
// 		else if (*iterator == "/") {
// 			if (itStart != itDivide) {
// 				for (std::list<std::string>::iterator it = itStart; it != itDivide; it++) {
// 					if (it == _rpn.begin())
// 						sumValue = atoi((*it).c_str());
// 					else
// 						sumValue /= atoi((*it).c_str());		
// 				}
// 				itStart = itDivide;
// 				itStart++;
// 				itDivide = find(itStart, _rpn.end(), "/");
// 			}
// 			//std::cout << "/ result = " << sumValue << std::endl;
// 		}
// 	}
// 	std::cout << sumValue << std::endl;
// }