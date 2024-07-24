/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:34:50 by malancar          #+#    #+#             */
/*   Updated: 2024/07/24 19:19:24 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int ac, char **av) {
	
	if (ac < 2) {
		std::cerr << "Expected at least one parameter" << std::endl;
		return 0;
	}
	try {
		std::vector<int> list;
		size_t size = 1;
		clock_t start = clock();
		
		parse(av, list);
		std::cout << "Before: ";
		displayVector(list);
		std::cout << std::endl;
		sortFJ(list, size);

		clock_t end = clock();
		double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
		std::cout << "After: ";
		displayVector(list);
		std::cout << std::endl;
		std::cout << "Time to preocess a range of " << list.size() << " with std::vector : " << std::fixed << std::setprecision(6) <<  RED << duration << " s" << RESET << std::endl;
		std::cout << std::endl;
		//displayVector(list);
	}
	catch (std::exception const& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}