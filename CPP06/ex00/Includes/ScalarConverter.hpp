/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:36:46 by malancar          #+#    #+#             */
/*   Updated: 2024/06/15 16:22:38 by malancar         ###   ########.fr       */
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
		
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& copy);
		
};

#endif