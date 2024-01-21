/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:02:20 by malancar          #+#    #+#             */
/*   Updated: 2024/01/21 19:22:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	// a = 0;
	//Fixed b = 2;
	
	std::cout << std::endl << "TEST: >" << std::endl;
	if (a > b)
		std::cout << a << " > " << b << std::endl << std::endl;
	else
		std::cout << b << " > " << a << std::endl << std::endl;
	std::cout << "TEST: <" << std::endl;
	if (a < b)
		std::cout << a << " < " << b << std::endl << std::endl;
	else
		std::cout << b << " < " << a << std::endl << std::endl;
	std::cout << "TEST: >=" << std::endl;
	if (a >= b)
		std::cout << a << " >= " << b << std::endl << std::endl;
	else
		std::cout << b << " >= "<< a << std::endl << std::endl;
	std::cout << "TEST: <=" << std::endl;
	if (a <= b)
		std::cout << a << " <= " << b << std::endl << std::endl;
	else
		std::cout << b << " <= " << a << std::endl << std::endl;
	std::cout << "TEST: ==" << std::endl;
	if (a == b)
		std::cout << a << " == "<< b << std::endl << std::endl;
	else
		std::cout << b << " != " << a << std::endl << std::endl;
	std::cout << "TEST: !=" << std::endl;
	if (a != b)
		std::cout << a << " != " << b << std::endl << std::endl;
	else
		std::cout << b << " == " << a << std::endl << std::endl;
	std::cout << "TEST: +" << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl << std::endl;
	std::cout << "TEST: -" << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl << std::endl;
	std::cout << "TEST: *" << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl << std::endl;
	std::cout << b << " * " << a << " = " << b * a << std::endl << std::endl;
	std::cout << "TEST: /" << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl << std::endl;
	//std::cout << b << " / " << a << " = " << b / a << std::endl << std::endl;
	std::cout << "TEST: incrementation" << std::endl;
	std::cout << "a = " << a <<std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl << "TEST: decrementation" << std::endl;
	std::cout << "a = " << a <<std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl << "TEST: " << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min = " << Fixed::min(a,b) << std::endl;
	std::cout << "max = " << Fixed::max(a,b) << std::endl;
	
	return 0;
}