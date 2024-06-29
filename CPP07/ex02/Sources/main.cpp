/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:42:50 by malancar          #+#    #+#             */
/*   Updated: 2024/06/26 15:30:21 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	try {
		Array<int> array(3);
		//array.displayArray();
		
		array.addElement(42);
		Array<int> array2 = array;
		array.displayArray();
		array2.displayArray();
		
		array.addElement(12);
		array.addElement(1);
		array.displayArray();
		//std::cout << "array = " <<  array[2] << std::endl;
		array.addElement(99);
		array.displayArray();

	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Array<char> array2(1);
		
		array2.displayArray();
		array2.addElement('a');
		array2.displayArray();
		std::cout << array2[0] << std::endl;

	}
	catch ( const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}