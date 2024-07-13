/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:49 by malancar          #+#    #+#             */
/*   Updated: 2024/07/13 16:36:25 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

void	PmergeMe::displayVector(std::vector<int> list) {
	
	// for (std::vector<int>::iterator it = _ceciEstUnVector.begin(); it != _ceciEstUnVector.end();it++) {
	// 	std::cout << *it << std::endl;
	// }
	for (size_t i = 0; i < list.size(); ++i) {
		std::cout << "[" <<  list[i] << "]" << std::endl;
	}
	std::cout << std::endl;
}
void	PmergeMe::parse(char **arg, std::vector<int> &list) {

	//GROS CACA :))))))))))
	std::string input;
	int value;
	int i = 1;
	int j = 0;
	
	while (arg[i]) {
		std::stringstream inputStream(arg[i]);
		while (inputStream >> input)
		{
			value = atoi(input.c_str());
			if (value < 0)
				throw std::invalid_argument("Only positive number allowed: " + input);
			list.push_back(value);
			j++;
		}
		i++;
	}
	if (j == 1)
		throw std::invalid_argument(input);
}

void	PmergeMe::swapElement(std::vector<int> &list, size_t sizeElement, size_t index) {

	//std::cout << "index = " << index << "sizeElement = " << sizeElement << std::endl;
	//std::cout << "index - size element = " << index - (sizeElement) << std::endl;
	//std::cout << "SWAP" << std::endl;
	for (size_t i = 0; i < sizeElement; i++) {
		//std::cout << " i = " << i << std::endl;
		//std::cout << "index = " << index - i << "to " << (index + sizeElement) - i << std::endl;
		//std::cout << "swap = " << list[index - i] << " to = " << list[(index + sizeElement) - i] << std::endl;
		std::swap(list[index - i], list[(index + sizeElement) - i]);
	}
	//std::cout << "PLUS SWAP" << std::endl;
	//displayVector(list);

}

void	PmergeMe::sortElement(std::vector<int> &list, size_t sizeElement) {

	std::cout << std::endl;
	size_t cursor = sizeElement;
	//std::cout << "size element / 2 = " << sizeElement / 2 << std::endl;
	//attention list impaire pas index < list.size(); nelement je crois?
	//int nbElement = 
	for (size_t index = (sizeElement -1); index < list.size(); index += (sizeElement * 2))
	{	
		//std::cout << "cursor = " << cursor - 1 << std::endl;
		//std::cout << "index = " << index << std::endl;
		//std::cout << "index to cmp = " << index + (sizeElement) << std::endl;
		std::cout << "cmp = " << list[index] << " to = " << list[index + (sizeElement)] << std::endl;
		if (list[index] > list[index + (sizeElement)])
		{
			std::cout << std::endl;
			swapElement(list, sizeElement, index);
		}
		cursor += sizeElement;
	}
}

void	PmergeMe::binarySearch(std::vector<int> &list, std::vector<int> nonSorted, std::vector<int> sorted) {

	(void)	list;
	(void)sorted;
	(void)nonSorted;
	// for (size_t i = 0; i < list.size(); i++)
	// 	std::cout << list[i] << std::endl;
	// std::cout << std::endl;
	// for (size_t i = 0; i < nonSorted.size(); i++)
	// 	std::cout << nonSorted[i] << std::endl;
	// std::cout << std::endl;
	// for (size_t i = 0; i < sorted.size(); i++)
	// 	std::cout << sorted[i] << std::endl;
}

void	PmergeMe::sortFJ(std::vector<int> &list, int index, size_t sizeElement) {
	
	int nbElement = list.size() / sizeElement;
	std::cout << "nb elemetn = " << nbElement << std::endl;
	std::cout << "SIZE ELEMENT = " << sizeElement << std::endl;
	if (nbElement <=  1)
		return ;
	sortElement(list, sizeElement);
	sizeElement *= 2;
	index++;
	std::cout << "RECURSSION: " << index << std::endl;
	displayVector(list);
	sortFJ(list, index, sizeElement);
	std::cout << "APRES RECURSSION: " << index << std::endl;
	index--;
	
	//std::vector<int> sorted;
	//std::vector<pair vector, int> nonSorted;
	// for (std::vector<int>::iterator i = list.begin(); i != list.end(); i++) {
	// 	sorted.push_back(*i);
	// 	if (*i != 0 && *i % 2 == 0)
	// 	{
	// 		nonSorted.push_back(*i);
	// 		list.erase(i);
	// 	}
	// }
	
	//binarySearch(list, nonSorted, sorted);
	//displayVector(toRemember);
	displayVector(list);
	
}
	
	