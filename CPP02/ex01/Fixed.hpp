/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:02:55 by malancar          #+#    #+#             */
/*   Updated: 2024/01/22 16:23:18 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <fstream>
#include <cmath>

class	Fixed {

	public:
		Fixed();
		Fixed(Fixed const& copy);
		Fixed(const int nbr);
		Fixed(const float nbr);
		
		~Fixed();
		
		void 	operator=(Fixed const& b);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_rawBits;
		static const int	_fractionalBits = 8;
		
};

std::ostream& operator<<(std::ostream &flux, Fixed const& nbr);

#endif