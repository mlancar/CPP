/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:37:42 by malancar          #+#    #+#             */
/*   Updated: 2024/06/24 13:45:24 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	
	std::vector<int> container;
	int index = 2;

	container.push_back(0);
	container.push_back(1);
	container.push_back(2);
	container.push_back(3);

	if (easyfind(container, index) == 1)
		std::cout << "find " << index << " in container" << std::endl;
	else
		std::cout << "Couldn't find " << index << " in container" << std::endl;
		
}