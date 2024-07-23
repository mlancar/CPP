/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:49 by malancar          #+#    #+#             */
/*   Updated: 2024/07/23 18:31:45 by malancar         ###   ########.fr       */
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

void	PmergeMe::swapElement(std::vector<int> &list, size_t sizeElement, size_t firstElement, size_t secondElement) {

	//std::cout << "index = " << index << "sizeElement = " << sizeElement << std::endl;
	//std::cout << "index - size element = " << index - (sizeElement) << std::endl;
	for (size_t i = 0; i < sizeElement; i++) {
	std::cout << "SWAP" << std::endl;
		//std::cout << " i = " << i << std::endl;
		//std::cout << "index = " << index - i << "to " << (index + sizeElement) - i << std::endl;
		//std::cout << "index = " << index << std::endl;
		//std::cout << "swap = " << list[index - i] << " to = " << list[(index + sizeElement) - i] << std::endl;
		//std::cout << "swap = " << index - i << " to = " << (index + sizeElement) - i << std::endl;

		std::swap(list[firstElement - i], list[(secondElement) - i]);
	}
	//std::cout << "PLUS SWAP" << std::endl;
	//displayVector(list);

}

void	PmergeMe::sortElement(std::vector<int> &list, size_t sizeElement, int nbElement) {

	std::cout << std::endl;
	size_t sizePair = sizeElement * 2;
	std::cout << "size element = " << sizeElement << std::endl;
	//attention list impaire pas index < list.size(); nelement je crois?
	std::cout << "nb eleemtnt = " << nbElement << std::endl;
	std::cout << "size Pair = " << sizePair << std::endl;
	for (int index = 0; index < (nbElement / 2); index++)
	{	
		//std::cout << "cursor = " << cursor - 1 << std::endl;
		std::cout << "index = " << index << std::endl;
		//std::cout << "index to cmp = " << index + (sizeElement) << std::endl;
		std::cout << "cmp = " << list[index * sizePair + (sizeElement - 1)] << " to = " << list[index * sizePair + (sizePair - 1)] << std::endl;
		if (list[index * sizePair + (sizeElement - 1)] > list[index * sizePair + (sizePair - 1)])
		{
			
			
			swapElement(list, sizeElement, index * sizePair + (sizeElement - 1), index * sizePair + (sizePair - 1));
		}
		
	}
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

int	PmergeMe::binarySearch(std::vector<int> &list, int min, int max, int value, size_t sizeElement) {
	size_t mid;
	
	(void)sizeElement;
	max--;
	//toujours regarder la valeur la plus a droite de l'élement
	//std::cout << "max =" << max << std::endl;
	while (min <= max) {
		mid = ((max + min) / 2) - (sizeElement - 1);
		
		if (min == (int)list.size())
		{
			
			return list.size();
		}
		
		std::cout << std::endl;
		std::cout << "max = " << list[max] << std::endl;
		std::cout << "min = " << list[min] << std::endl;
		std::cout << "cmp = " << value << "to " << list[mid] << std::endl;
		//std::cout << "index cmp = " << mid << std::endl;
		if (value > list[mid])
		{
			//std::cout << "superieur" << std::endl;
			min = mid + sizeElement;
			std::cout << "ici min = " << min << std::endl;
			
		}
		else {
			//std::cout << "inferieur" << std::endl;
			max = mid - sizeElement;
			std::cout << "ici max = " << max << std::endl;
		}
	}
	
	return min;
}


void	PmergeMe::insertion(size_t sizeElement, std::vector<int> &list, std::vector<std::pair<std::vector<int>, int> > nonSorted) {
	
	int max;
	int min;
	int toInsert;
	
	for (size_t i = 0; i < nonSorted.size(); i++) {

		max = nonSorted[i].second;
		min = sizeElement - 1;
		for (size_t k = 0; k < list.size();k++)
		{
			if (list[k] == max)
			{
				max = k;
				break;
			}
		}
		std::cout << "size = " << list.size() << std::endl;
		if (nonSorted[i].second == -1)
			max = list.size() ;
		std::cout << "max = " << max << std::endl;
		toInsert = binarySearch(list, min, max, nonSorted[i].first[sizeElement - 1], sizeElement);
		std::vector<int>::iterator iterator;
		std::cout << "ICI to insert = " << toInsert << std::endl;
		std::cout << "size element = " << sizeElement << std::endl;
		if (sizeElement == 1)
		{
				iterator = list.begin() + toInsert;
				//std::cout << "position to insert = " << *iterator << std::endl;
				//std::cout << "to insert = " << nonSorted[i].first[0] << std::endl;
				list.insert(iterator, nonSorted[i].first[0]);
				printList("", list, sizeElement);
		}
		else 
		{
			for (int j = sizeElement - 1 ; j >= 0; j--)//FAIRE DANS LE SENS INVERSE PARCE QUE LA CA PART EN NEGATIF !
			{
				std::cout << "j = " << j << std::endl;
				std::cout << "pos = " << toInsert << std::endl;
				if (toInsert == 0)
					iterator = list.begin();
				else
					iterator = list.begin() + (toInsert - (sizeElement - 1));
				
				std::cout << "position to insert = " << *iterator << std::endl;
				std::cout << "to insert = " << nonSorted[i].first[j] << std::endl;
				list.insert(iterator, nonSorted[i].first[j]);
				printList("", list, sizeElement);
			}
		}
	}
}


void	PmergeMe::sortFJ(std::vector<int> &list, int index, size_t sizeElement) {
	
	int nbElement = list.size() / sizeElement;

	if (nbElement <=  1)
		return ;
	sortElement(list, sizeElement, nbElement);
	index++;
	std::cout << "LA DESCENTE AU ENFER NIVEAU: " << index << std::endl;
	displayVector(list);
	std::cout << "____________________________________________________________________________________________" << std::endl;
	printList("", list, sizeElement);
	
	sortFJ(list, index, sizeElement * 2);
	std::cout << "_____________________________________________________________________________________________" << std::endl;
	std::cout << "REMONTADA AU PARADIS NIVEAU: " << index << std::endl;
	index--;
	

	std::vector<std::pair<std::vector<int>, int> >nonSorted;
	
	nbElement = list.size() / sizeElement;
	printList("", list, sizeElement);
	if (nbElement < 3)
		return;

	std::vector<int>::iterator currentElement = list.begin() + (2 * sizeElement);
	std::vector<int>::iterator start = currentElement;
	std::vector<int>::iterator end = currentElement + sizeElement;
	
	for (int i = 2; i < nbElement; i += sizeElement) {
		if (nbElement % 2 == 1 && i == nbElement - 1)
		{
			nonSorted.push_back(std::make_pair(std::vector<int>(start, end), -1));
			list.erase(start, end);
			currentElement += sizeElement;
			start = currentElement;
			end = currentElement + sizeElement;
		}
		else if (i % 2 == 0)
		{
			nonSorted.push_back(std::make_pair(std::vector<int>(start, end), *end));
			list.erase(start, end);
			currentElement += sizeElement;
			start = currentElement;
			end = currentElement + sizeElement;
		}
			
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
	//printList("", list, sizeElement);
	insertion(sizeElement, list, nonSorted);
	displayVector(list);
	
}
	
	