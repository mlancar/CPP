/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:43:32 by malancar          #+#    #+#             */
/*   Updated: 2024/01/21 20:06:07 by malancar         ###   ########.fr       */
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
