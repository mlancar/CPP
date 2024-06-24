/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:48:57 by malancar          #+#    #+#             */
/*   Updated: 2024/06/24 18:24:58 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int sizeMax): _sizeMax(sizeMax) {
}

Span::Span(Span const& copy): _sizeMax(copy._sizeMax) {
	
}

Span::~Span() {
	
}

Span	&Span::operator=(Span const& rhs)  {
	_sizeMax = rhs._sizeMax;
	return *this;
}

void	Span::addNumber(unsigned int numberToAdd) {
	(void)numberToAdd;
	if (_span.size() >= _sizeMax)
		throw std::out_of_range("out of range");
	_span.push_back(numberToAdd);
}

int		Span::shortestSpan() {

	std::sort(_span.begin(), _span.end());
	int shortestSpan = INT_MAX;
	// for (std::vector<int>::iterator i = _span.begin(); i != _span.end(); i++)
	// 	std::cout << *i << std::endl;
	int lastNumber = _span[0];
	for (std::vector<int>::iterator i = _span.begin() + 1 ; i != _span.end() ; i++) {
		//std::cout << lastNumber << " - " << *i << " = " << *i - lastNumber << std::endl;
		if (*i - lastNumber < shortestSpan)
			shortestSpan = *i - lastNumber;
		lastNumber = *i;
	}
	//std::cout << "shortest span = " << shortestSpan << std::endl;
	return 0;
}

int		Span::longestSpan() {
	// std::sort(_span.begin(), _span.end());
	// std::vector<int>::iterator min = _span.begin();
	// std::vector<int>::iterator max= _span.begin();
	// for (std::vector<int>::iterator i = _span.begin() + 1 ; i != _span.end() ; i++) {
	// 	if (std::min_element(*min, *i) == *i)
	// 		min = i;
	// 	if (std::max_element(*max,*i) == *i)
	// 		max = i;
	// }
	// int maxnb = *max;
	int min = *std::min_element(_span.begin(), _span.end());
	int max = *std::max_element(_span.begin(), _span.end());
	return (max - min);
}
