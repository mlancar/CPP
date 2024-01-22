/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:02:55 by malancar          #+#    #+#             */
/*   Updated: 2024/01/22 16:16:45 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class	Fixed {

	public:
		Fixed();
		Fixed(Fixed const& copy);
		~Fixed();
		
		void operator=(Fixed const& b);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		

	private:
		int					_rawBits;
		static const int	_fractionalBits;
};

static const int _fractionalBits = 8;

#endif