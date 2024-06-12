/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:36:55 by malancar          #+#    #+#             */
/*   Updated: 2024/06/12 15:27:51 by malancar         ###   ########.fr       */
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

void ScalarConverter::convert(std::string literal) {
	char 	convertChar;
	int		convertInt;
	float	convertFloat;
	//double	convertDouble;
	
	convertChar = literal.c_str();
	convertInt = atoi(literal.c_str());
	convertFloat = atof(literal.c_str());
	//convertDouble = 
	std::cout << "char: " << convertChar << std::endl;
	std::cout << "int: " << convertInt << std::endl;
	std::cout << "float: " << convertFloat << std::endl;
	std::cout << "double" <<  convertFloat << std::endl;
	
}
