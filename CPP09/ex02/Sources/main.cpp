/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:34:50 by malancar          #+#    #+#             */
/*   Updated: 2024/07/10 17:58:20 by malancar         ###   ########.fr       */
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
		test.parse(av);
		std::cout << "ETAPE 1" << std::endl << std::endl;
		test.displayVector();
		test.swapInsidePair();
		std::cout << "ETAPE 2" << std::endl << std::endl;
		test.displayVector();
		test.swapPair();
		std::cout << "ETAPE 3" << std::endl << std::endl;
		test.displayVector();

	}
	catch (std::exception const& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}