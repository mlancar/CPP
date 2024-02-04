/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:47:53 by malancar          #+#    #+#             */
/*   Updated: 2024/01/22 17:29:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abc;
	Fixed	abp;
	Fixed	apc;
	Fixed	pbc;

	abc = Point::areaCalculation(a, b, c);
	abp = Point::areaCalculation(a, b, point);
	apc = Point::areaCalculation(a, point, c);
	pbc = Point::areaCalculation(point, b, c);

	std::cout << "abc = " << abc << std::endl;
	std::cout << "abp = " << abp << std::endl;
	std::cout << "apc = " << apc << std::endl;
	std::cout << "pbc = " << pbc << std::endl;

	if (abp == 0 || apc == 0 || pbc == 0)
		return false;
	else if ((abp + apc + pbc) == abc)
		return true;
	else
		return false;
}
