/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:15:07 by malancar          #+#    #+#             */
/*   Updated: 2024/01/19 18:43:30 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copy): _rawBits(copy._rawBits)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	//std::cout << "rawbits = " << _rawBits << std::endl;
	//std::cout << "nbr = " << nbr << std::endl;
	_rawBits = nbr * (1 << _fractionalBits);

	//_rawBits = nbr;
	//std::cout << "rawbits = " << _rawBits << std::endl;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(nbr * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(Fixed const& b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = b._rawBits;
}

std::ostream&	operator<<(std::ostream &flux, Fixed const& nbr)
{
	return flux << nbr.toFloat();
	//return flux;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw;
}

void	Fixed::displayNbr(std::ostream &flux) const
{
	flux << _rawBits;
	//std::cout << "rawbits = " << _rawBits << std::endl;
}

float	Fixed::toFloat(void)  const
{
	return (float)_rawBits / (1 << _fractionalBits);
	
}

int		Fixed::toInt(void) const
{
	return _rawBits / (1 << _fractionalBits);
}
