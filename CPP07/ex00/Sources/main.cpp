/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:21:02 by malancar          #+#    #+#             */
/*   Updated: 2024/06/17 15:44:00 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main() {
	whatever <int>w;
	whatever <char>z;
	int a = 1;
	int b = 2;
	char c = 'c';
	char d = 'd';

	w.swap(a, b);
	z.swap(c, d);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	
}