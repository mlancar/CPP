/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:43:10 by malancar          #+#    #+#             */
/*   Updated: 2024/01/22 16:03:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {

	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &copy);
		~Point();

		Point	operator=(Point const &n);
		static Fixed areaCalculation(Point const a, Point const b, Point const c);


	private:
		const Fixed		_x;
		const Fixed		_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif