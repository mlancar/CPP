/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:49 by malancar          #+#    #+#             */
/*   Updated: 2024/07/12 18:50:13 by malancar         ###   ########.fr       */
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

void	PmergeMe::sortElement(std::vector<int> &list, int sizeElement) {

	std::cout << std::endl;
	int previousIndex = 0;
	size_t cursor = sizeElement;

	if (cursor == 1)
		return;
	if (sizeElement == 2)
	{
		for (size_t index = 0; index < list.size(); index++)
		{
			if (index % 2 == 0)
				previousIndex = index;
			else if (index % 2 == 1)
			{
				if (list[index] < list[previousIndex])
					std::swap(list[index], list[previousIndex]);
			}
		}
	}
	else
	{
		for (size_t index = 0; index < list.size(); index++)
		{	
			//std::cout << "index = " << index << std::endl;
			//std::cout << "cursor = " << cursor - 1 << std::endl;
			if (index == (size_t)sizeElement &&  index == ((size_t)cursor - 1))
				previousIndex = index;
			if ((cursor - 1 ) == index)
			{
				//std::cout << "cmp = " << list[index] << " to = " << list[previousIndex] << std::endl;
				if (list[index] < list[previousIndex])
				{
					std::cout << std::endl;
					for (size_t i = index; i > index - (sizeElement ); --i) {
						
						//std::cout << "swap = " << i << " to = " << previousIndex << std::endl;
						std::swap(list[i], list[previousIndex]);
						previousIndex--;
					}
				}
			}
			if (index == cursor)
				cursor += cursor;
			if (index == ((size_t)cursor - 1))
				previousIndex = index;
		}
		
	}
}

void	PmergeMe::sortFJ(std::vector<int> &list, int index, int sizeElement) {
	
	int nbElement = list.size() / sizeElement;

	if (nbElement <= 1)
		return ;
	
	sortElement(list, sizeElement);
	sizeElement *= 2;
	index++;
	std::cout << "RECURSSION: " << index << std::endl;
	displayVector(list);
	sortFJ(list, index, sizeElement);
	std::cout << "RECURSSION: " << index << std::endl;
	index--;
	displayVector(list);
}
	
	