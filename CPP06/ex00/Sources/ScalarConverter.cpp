/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:36:55 by malancar          #+#    #+#             */
/*   Updated: 2024/06/19 16:28:23 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(ScalarConverter const& copy) {
	(void)copy;
}

ScalarConverter::~ScalarConverter() {	
}

const char* ScalarConverter::cannotConvert::what() const throw() {
	return "Cannot convert";
}	

void ScalarConverter::convert(std::string literal) {
	double	valueToConvert;
	char *endptr;
	
	valueToConvert = strtof(literal.c_str(), &endptr);
	
	try {
		if (*endptr != '\0' && *endptr != 'f')
			throw cannotConvert();
		else if (endptr == literal.c_str())
			throw cannotConvert();
		else if (valueToConvert < std::numeric_limits<int>::min() || valueToConvert> std::numeric_limits<int>::max())
			throw std::overflow_error("int: overflow");
		else if (valueToConvert < std::numeric_limits<int>::min() || valueToConvert> std::numeric_limits<int>::max())
			throw std::overflow_error("int: overflow");
		std::cout << "int: " << static_cast<int>(valueToConvert) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		if (std::isinf(valueToConvert))
			throw  std::overflow_error("float: infinite");
		else if (valueToConvert < -std::numeric_limits<float>::max() || valueToConvert > std::numeric_limits<float>::max())
			throw std::overflow_error("float: overflow");
		// else if (valueToConvert != 0 && (std::fabs(valueToConvert) < std::numeric_limits<float>::min()))
        // 	throw std::underflow_error("float: underflow");
		std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(valueToConvert) << "f" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		if (std::isinf(valueToConvert))//peutetre mettre ca dans le main/cooonvert
			throw  std::overflow_error("double: infinite");
		else if (valueToConvert < -std::numeric_limits<double>::max() || valueToConvert > std::numeric_limits<double>::max())
			throw std::overflow_error("double: overflow");
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(valueToConvert) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		if (isprint(static_cast<char>(valueToConvert)) != 0)
				std::cout << "char: " <<   static_cast<char>(valueToConvert) << std::endl;
		else
			throw std::out_of_range("char: non diplayable");
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
