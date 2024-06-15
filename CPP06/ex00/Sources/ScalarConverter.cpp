/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:36:55 by malancar          #+#    #+#             */
/*   Updated: 2024/06/15 18:06:35 by malancar         ###   ########.fr       */
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
	double	convertDouble;
	long	value;

	(void)convertChar;
	char *endptr;
	convertInt = 0;
	value = strtol(literal.c_str(), &endptr, 10);
	convertDouble = strtod(literal.c_str(), &endptr);
	//std::cout << "value = " << value << std::endl;
	if (*endptr != '\0' && *endptr != 'f')
		std::cerr << "int: erreur de conversion ou chaine vide" << std::endl;
	else if (endptr == literal.c_str())
		std::cerr << "int: caracteres non numeriques apres le nombre" << std::endl;
	else if (value < std::numeric_limits<int>::min() || value> std::numeric_limits<int>::max())
		std::cerr << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(convertDouble) << std::endl;
	
	convertFloat = strtof(literal.c_str(), &endptr);
	if (*endptr != '\0' && *endptr != 'f')
		std::cerr << "float: caracteres non numeriques apres le nombre" << std::endl;
	else if (endptr == literal.c_str())
		std::cerr << "float: caracteres non numeriques apres le nombre" << std::endl;
	else if (std::isinf(convertFloat))
		std::cerr << "float: infinie" << std::endl;
	else if (convertFloat < -std::numeric_limits<float>::max() || convertFloat > std::numeric_limits<float>::max())
		std::cerr << "float: overflow" << std::endl;
	else
		std::cout << "float: "  << std::fixed << std::setprecision(1) << static_cast<float>(convertDouble) << "f" << std::endl;

	if (*endptr != '\0' && *endptr != 'f')
		std::cerr << "double:  caracteres non numeriques apres le nombre" << std::endl;
	else if (endptr == literal.c_str())
		std::cerr << "double: caracteres non numeriques apres le nombre" << std::endl;
	else if (std::isinf(convertDouble))
		std::cerr << "double: infinie" << std::endl;
	else if (convertDouble < -std::numeric_limits<double>::max() || convertDouble > std::numeric_limits<double>::max())
		std::cerr << "double: overflow" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(convertDouble) << std::endl;

	convertChar = static_cast<char>(convertDouble);
	if (isprint(convertChar))
	{
		//convertInt =(convertChar);
		
			std::cout << "char: " <<  convertChar << std::endl;
		
			//std::cerr << "char: impossible" << std::endl;
	}
	else
		std::cerr << "char: non diplayable" << std::endl;
}
