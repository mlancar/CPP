/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:02:20 by malancar          #+#    #+#             */
/*   Updated: 2024/01/22 17:14:18 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	// std::cout << "Test p sur le sommet former par ab: << std::endl;
	// const Point	a(2, 1);
	// const Point	b(5, 3);
	// const Point	c(4, 6);
	// const Point	point(2, 1);
	
	// std::cout << "Test p sur sur l'arrete  par ab:" << std::endl;
	// const Point	a(1, 0);
	// const Point	b(3, 0);
	// const Point	c(1, 1);
	// const Point	point(2, 0);

	std::cout << "Test p sur sur l'arrete  par ab:" << std::endl;
	const Point	a(2, 1);
	const Point	b(5, 3);
	const Point	c(4, 6);
	const Point	point(4, 2);
	
	// std::cout << "Test p sur sur l'arrete  par ab:" << std::endl;
	// const Point	a(1, 0);
	// const Point	b(3, 0);
	// const Point	c(1, 1);
	// const Point	point(2, 0);
	
	if (bsp(a, b, c, point))
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	return 0;
}