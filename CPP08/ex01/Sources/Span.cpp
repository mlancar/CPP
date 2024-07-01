/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:48:57 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 18:36:21 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _sizeMax(0) {
}
 
Span::Span(int sizeMax): _sizeMax(sizeMax) {
}

Span::Span(Span const& copy) {
	_sizeMax = copy._sizeMax;
	_span = copy._span;
}

Span::~Span() {
}

Span	&Span::operator=(Span const& rhs)  {
	
	_sizeMax = rhs._sizeMax;
	_span = rhs._span;
	return *this;
}

void	Span::addNumber(int numberToAdd) {
	std::string number;
	std::ostringstream convert;
	convert << numberToAdd;
	number = convert.str();
	
	if (_span.size() >= _sizeMax)
		throw std::out_of_range("Span is full, cannot add: " + number);
	_span.push_back(numberToAdd);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (std::distance(begin, end) > _sizeMax)
		throw std::out_of_range("Cannot add numbers, not enough space");
	_span.insert(_span.end(), begin, end);
}

int		Span::shortestSpan() {

	if (_span.size() < 2)
		throw std::invalid_argument("Cannot find shortest span, need at least two value");
	std::sort(_span.begin(), _span.end());
	int shortestSpan = INT_MAX;
	int lastNumber = _span[0];
	
	for (std::vector<int>::iterator i = _span.begin() + 1 ; i != _span.end() ; i++) {
		
		if (*i - lastNumber < shortestSpan)
			shortestSpan = *i - lastNumber;
		lastNumber = *i;
	}
	return shortestSpan;
}

int		Span::longestSpan() {
	if (_span.size() < 2)
	throw std::invalid_argument("Cannot find shortest span, need at least two value");

	int min = *std::min_element(_span.begin(), _span.end());
	int max = *std::max_element(_span.begin(), _span.end());
	
	return (max - min);
}
