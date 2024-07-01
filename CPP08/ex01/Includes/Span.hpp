/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:48:10 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 16:39:57 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <limits.h>
#include <sstream>

class Span
{
	public:
		Span();
		Span(int number);
		Span(Span const& copy);
		~Span();
		
		Span &operator=(Span const& rhs);
	
		void	addNumber(int numberToAdd);
		int		shortestSpan();
		int		longestSpan();
		
	private:
		unsigned int _sizeMax;
		std::vector<int> _span;
};

#endif