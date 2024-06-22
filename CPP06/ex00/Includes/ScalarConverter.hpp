/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:36:46 by malancar          #+#    #+#             */
/*   Updated: 2024/06/22 14:36:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>
#include <limits>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
	public:
		~ScalarConverter();
		static void	convert(std::string literal);
		static bool	isAlpha(std::string literal, double valueToConvert);
		static void	convertchar(std::string literal, double valueToConvert);
		static void	convertInt(char *endptr, std::string literal, double valueToConvert);
		static void	convertFloat(char *endptr, std::string literal, double valueToConvert);
		static void	convertDouble(char *endptr, std::string literal, double valueToConvert);

		class cannotConvert : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& copy);
		
};

#endif