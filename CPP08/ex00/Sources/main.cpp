/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:37:42 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 15:55:44 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

	std::vector<int> container;
	int value = 2;

	container.push_back(0);
	container.push_back(1);
	container.push_back(2);
	container.push_back(3);

	try {
		easyfind(container, value);
		std::cout << "Found: " << value << " in container" << std::endl;
	}
	catch (std::exception const& e) {
		std::cerr << e.what() << value << " in container" << std::endl;
	}
	
	std::vector<char> container2;
	char letter = 'a';
	
	container2.push_back('a');
	container2.push_back('a');
	
	
	try {
		easyfind(container2, letter);
		std::cout << "Found: " << letter << " in container" << std::endl;
	}
	catch (std::exception const& e) {
		std::cerr << e.what() << letter << " in container" << std::endl;
	}
}