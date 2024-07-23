/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:34:50 by malancar          #+#    #+#             */
/*   Updated: 2024/07/23 20:59:27 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av) {
	
	if (ac < 2) {
		std::cerr << "Expected at least one parameter" << std::endl;
		return 0;
	}
	PmergeMe	test;
	try {
		std::vector<int> list;
		int index = 0;
		size_t size = 1;
		
		test.parse(av, list);
		//std::cout << "ETAPE 0" << std::endl << std::endl;
		//test.displayVector(list);

		//std::cout << "ETAPE 1" << std::endl << std::endl;
		//test.displayVector(list);
		
		test.sortFJ(list, index, size);
		//std::cout << "ETAPE 2" << std::endl << std::endl;
		test.displayVector(list);

	}
	catch (std::exception const& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}