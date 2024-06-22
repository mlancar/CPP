/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:36:55 by malancar          #+#    #+#             */
/*   Updated: 2024/06/22 14:45:39 by malancar         ###   ########.fr       */
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

bool		ScalarConverter::isAlpha(std::string literal, double valueToConvert) {
	if (literal == "nan")
		return 0;
	else if (valueToConvert == 0 && literal.size() != 1)
		return 0;
	else if (isalpha(static_cast<char>(literal.at(0))))
		return 1;
	return 0;
}

void	ScalarConverter::convertchar(std::string literal, double valueToConvert) {
	
	if (isAlpha(literal, valueToConvert))
		std::cout << "char: " << literal << std::endl;
	else if (valueToConvert < 128 && isprint(static_cast<char>(valueToConvert)) != 0)
			std::cout << "char: " <<   static_cast<char>(valueToConvert) << std::endl;
	else
		throw std::out_of_range("char: non diplayable");
}

void	ScalarConverter::convertInt(char *endptr, std::string literal, double valueToConvert) {
	if (std::isnan(valueToConvert))
		throw cannotConvert();
	else if (isAlpha(literal, valueToConvert))
		std::cout << "int: " << static_cast<int>(literal.at(0)) << std::endl;
	else if (*endptr == 'f' && literal.find('f') != literal.size() - 1)
		throw cannotConvert();
	else if ((*endptr != '\0' && *endptr != 'f') || endptr == literal.c_str())
			throw cannotConvert();
	else if (valueToConvert < std::numeric_limits<int>::min() || valueToConvert> std::numeric_limits<int>::max())
		throw std::overflow_error("overflow");
	else
		std::cout << "int: " << static_cast<int>(valueToConvert) << std::endl;
}

void	ScalarConverter::convertFloat(char *endptr, std::string literal, double valueToConvert) {
	if (isAlpha(literal, valueToConvert))
		std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(literal.at(0)) << "f" << std::endl;
	else if (*endptr == 'f' && literal.find('f') != literal.size() - 1)
		throw cannotConvert();
	else if ((*endptr != '\0' && *endptr != 'f') || endptr == literal.c_str())
		throw cannotConvert();
	else if (std::isinf(valueToConvert))
		throw  std::overflow_error("infinite");
	else if (valueToConvert < -std::numeric_limits<float>::max() || valueToConvert > std::numeric_limits<float>::max())
		throw std::overflow_error("overflow");
	else
		std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(valueToConvert) << "f" << std::endl;
		
}

void	ScalarConverter::convertDouble(char *endptr, std::string literal, double valueToConvert) {
	if (isAlpha(literal, valueToConvert))
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(literal.at(0)) << std::endl;
	else if (*endptr == 'f' && literal.find('f') != literal.size() - 1)
		throw cannotConvert();
	else if ((*endptr != '\0' && *endptr != 'f') || endptr == literal.c_str())
		throw cannotConvert();
	else if (std::isinf(valueToConvert))
		throw  std::overflow_error("infinite");
	else if (valueToConvert < -std::numeric_limits<double>::max() || valueToConvert > std::numeric_limits<double>::max())
		throw std::overflow_error("overflow");
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(valueToConvert) << std::endl;
}
void ScalarConverter::convert(std::string literal) {
	double	valueToConvert;
	char *endptr;

	valueToConvert = strtod(literal.c_str(), &endptr);
	
	try {
		ScalarConverter::convertchar(literal, valueToConvert);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		ScalarConverter::convertInt(endptr, literal, valueToConvert);
	}
	catch (const std::exception &e) {
		std::cerr << "int: " << e.what() << std::endl;
	}
	
	try {
		ScalarConverter::convertFloat(endptr, literal, valueToConvert);
	}
	catch (const std::exception &e) {
		std::cerr << "float: " << e.what() << std::endl;
	}

	try {
		ScalarConverter::convertDouble(endptr, literal, valueToConvert);
	}
	catch (const std::exception &e) {
		std::cerr << "double: " << e.what() << std::endl;
	}
	
}
