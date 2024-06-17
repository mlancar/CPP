/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:42:50 by malancar          #+#    #+#             */
/*   Updated: 2024/06/17 20:05:14 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	
	try {
		Array<int> array(3);
		array.addElement(42);
		array.addElement(12);
		array.addElement(1);
		array.addElement(99);
		array.addElement(43);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	array.displayArray();
}