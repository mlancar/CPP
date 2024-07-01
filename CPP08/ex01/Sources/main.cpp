/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:46:11 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 17:12:17 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {

	Span span = Span(2);
	try {

		span.addNumber(10);
		span.addNumber(5);
		span.addNumber(11111111);
		span.addNumber(9);
		span.addNumber(11);

		
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Span span = Span(10);
		Span span2;
		
		span.addNumber(20);
		span.addNumber(5);
		span.addNumber(4);
		span.addNumber(9);
		span.addNumber(11);

		span2 = span;
		
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << span2.shortestSpan() << std::endl;
		std::cout << span2.longestSpan() << std::endl;
		
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
	
	try {
		Span span(11000);
		for (int i = 0; i < 11000; i++) {
			span.addNumber(i);
		}
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}