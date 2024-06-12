/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:36:46 by malancar          #+#    #+#             */
/*   Updated: 2024/06/12 15:24:15 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>

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