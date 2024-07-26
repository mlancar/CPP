/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:34:50 by malancar          #+#    #+#             */
/*   Updated: 2024/07/26 18:26:25 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int g_cmp = 0;

int main(int ac, char **av) {
	
	if (ac < 2) {
		std::cerr << "Expected at least one parameter" << std::endl;
		return 0;
	}
	try {
		std::vector<int> list;
		std::deque<int> list2;
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
		std::cout << "Time to preocess a range of " << list.size() << " with std::vector : " << std::fixed << std::setprecision(6) <<  GREEN << duration << " s" << RESET << std::endl;
		start = clock();
		
		std::cout << std::endl;
		parseDeque(av, list2);
		std::cout << "Before: ";
		displayDeque(list2);
		std::cout << std::endl;
		sortFJDeque(list2, size);

		end = clock();
		std::cout << "After: ";
		displayDeque(list2);
		std::cout << std::endl;

		std::cout << "Time to preocess a range of " << list2.size() << " with std::vector : " << std::fixed << std::setprecision(6) <<  GREEN << duration << " s" << RESET << std::endl;
		std::cout << std::endl;
		std::cout << "cmp = " << g_cmp << std::endl;
	}
	catch (std::exception const& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}