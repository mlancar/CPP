/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:49 by malancar          #+#    #+#             */
/*   Updated: 2024/07/15 19:19:40 by malancar         ###   ########.fr       */
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

void	PmergeMe::binarySearch(std::vector<int> &list, std::vector<int> nonSorted) {


}

template <typename T>
void printList(const std::string &str, T &container, size_t sizeElement)
{
    typename T::iterator begin = container.begin();
    if (!str.empty()) {
		std::cout<<str<<" ";
	}
	
	std::cout << "{";
    for (size_t i = 0; begin != container.end();begin++ , i++)
    {  
        if (i == sizeElement)
        {
            std::cout<<"} {";
            i = 0;
        }
        std::cout<<*begin<<" ";
    }
    std::cout<<"}";
    std::cout<<std::endl;
}

void	PmergeMe::sortFJ(std::vector<int> &list, int index, size_t sizeElement) {
	
	int nbElement = list.size() / sizeElement;
	std::cout << "nb elemetn = " << nbElement << std::endl;
	std::cout << "SIZE ELEMENT = " << sizeElement << std::endl;
	if (nbElement <=  1)
		return ;
	sortElement(list, sizeElement);
	index++;
	std::cout << "LA DESCENTE AU ENFER NIVEAU: " << index << std::endl;
	displayVector(list);
	std::cout << "____________________________________________________________________________________________" << std::endl;

	sortFJ(list, index, sizeElement * 2);
	std::cout << "_____________________________________________________________________________________________" << std::endl;
	std::cout << "REMONTADA AU PARADIS NIVEAU: " << index << std::endl;
	index--;
	

	std::vector<std::pair<std::vector<int>, int> >nonSorted;
	// for (int i = sizeElement; i < nbElement; i += sizeElement) {
	
	// 	// if (*i != 0 && )
	// 	// {
	// 	// 	nonSorted.push_back(*i);
	// 	// 	list.erase(i);
	// 	// }
	// }
	std::cout << "nb elemetn = " << nbElement << std::endl;
	std::cout << "SIZE ELEMENT = " << sizeElement << std::endl;
	printList("", list, sizeElement);
	if (nbElement < 3)
		return;
	int currrentElement = 2 * (sizeElement );
	std::vector<int>::iterator start = list.begin() + currrentElement;
	std::vector<int>::iterator end = list.begin() + (currrentElement + sizeElement);
	for (int i = 2; i < nbElement; i += sizeElement) {
		nonSorted.push_back(std::make_pair(std::vector<int>(start, end), list[currrentElement + sizeElement]));
		currrentElement += sizeElement;
		start = list.begin() + currrentElement;
		end = list.begin() + (currrentElement + (sizeElement - 1));
	}
	for (size_t i = 0; i < nonSorted.size(); ++i) {
        std::cout << "Pair " << i << ": [";
        for (size_t j = 0; j < nonSorted[i].first.size(); ++j) {
            std::cout << nonSorted[i].first[j];
            if (j < nonSorted[i].first.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "] " << nonSorted[i].second << std::endl;
    }
	binarySearch(list, nonSorted);
	displayVector(list);
	
}
	
	