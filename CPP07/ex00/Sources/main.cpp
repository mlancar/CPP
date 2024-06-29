/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:21:02 by malancar          #+#    #+#             */
/*   Updated: 2024/06/26 15:23:46 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include"awesome.hpp"


int main() {
	// int a = 1;
	// int b = 2;
	// char c = 'c';
	// char d = 'd';

	// std::cout << "test with int: " << std::endl;
	// std::cout << std::endl;
	// std::cout << "before swap: " << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// swap<int>(a, b);
	// std::cout << "after swap: " << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << std::endl;
	// std::cout << "test with char: " << std::endl;
	// std::cout << std::endl;
	// std::cout << "before swap: " << std::endl;
	// std::cout << "c = " << c << std::endl;
	// std::cout << "d = " << d << std::endl;
	// swap<char>(c, d);
	// std::cout << "after swap: " << std::endl;
	// std::cout << "c = " << c << std::endl;
	// std::cout << "d = " << d << std::endl;
	// std::cout << std::endl;
	// std::cout << "min between a and b = " << min<int>(a, b) << std::endl;
	// std::cout << "max between a and b = " << max<int>(a, b) << std::endl;
	
	// 
	awesome a(2);
	awesome b(4);

	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
	
	return 0;
}