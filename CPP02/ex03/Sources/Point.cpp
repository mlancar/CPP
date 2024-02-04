/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:43:32 by malancar          #+#    #+#             */
/*   Updated: 2024/01/22 17:14:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{

}

Point::Point(float const x, float const y): _x(x), _y(y)
{
	
}

Point::Point(Point const &copy): _x(copy._x), _y(copy._y)
{

}

Point::~Point()
{
	
}

Point	Point::operator=(Point const &n)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	(void)n;
	return *this;
}

Fixed Point::areaCalculation(Point const a, Point const b, Point const c)
{
	Fixed n = Fixed(0.5f);
	Fixed	result;
	
	result = n * (((b._x - a._x) * (c._y - a._y)) - ((c._x - a._x) * (b._y - a._y)));
	if (result < 0)
		result = result * -1;
	return result;
}
