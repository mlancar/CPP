/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:49 by malancar          #+#    #+#             */
/*   Updated: 2024/07/24 19:32:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
bool is_sorted(T& c, size_t sizeElement)
{
    typename T::iterator it = c.begin();

    typename T::iterator prev = it;
    advance(it, sizeElement + (sizeElement - 1));
    advance(prev, sizeElement-1);
    while (1)
    {
        if (*prev > *it)
        {
            return false;
        }
        if ((size_t)std::distance(it, c.end()) <= sizeElement)
            break ;
        advance(it, sizeElement);
        advance(prev, sizeElement);
    }
    return true;
}

void	displayVector(std::vector<int> list) {
	
	for (size_t i = 0; i < list.size(); ++i) {
		std::cout <<  list[i] << " ";
	}
	//std::cout << std::endl;
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

void	displayPair(std::vector<std::pair<std::vector<int>, int> > list) {

	for (size_t i = 0; i < list.size(); ++i) {
        std::cout << "Pair " << i << ": [";
        for (size_t j = 0; j < list[i].first.size(); ++j) {
            std::cout << list[i].first[j];
            if (j < list[i].first.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "] " << list[i].second << std::endl;
    }
}
void	parse(char **arg, std::vector<int> &list) {

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

void	swapElement(std::vector<int> &list, size_t sizeElement, size_t firstElement, size_t secondElement) {

	for (size_t i = 0; i < sizeElement; i++) {
		std::swap(list[firstElement - i], list[(secondElement) - i]);
	}
}

void	sortElement(std::vector<int> &list, size_t sizeElement, int nbElement) {

	size_t sizePair = sizeElement * 2;
	
	for (int index = 0; index < (nbElement / 2); index++)
	{
		//cmp++
		if (list[index * sizePair + (sizeElement - 1)] > list[index * sizePair + (sizePair - 1)])	
			swapElement(list, sizeElement, index * sizePair + (sizeElement - 1), index * sizePair + (sizePair - 1));
	}
}

int	binarySearch(std::vector<int> &list, int min, int max, int value, size_t sizeElement) {
	size_t mid;
	
	while (min <= max) {
		mid = ((max + min) / (2 * sizeElement));
		mid *= sizeElement;
		mid += sizeElement - 1;

		//cmp++
		if (value > list[mid])
			min = mid + sizeElement;
		else 
			max = mid - sizeElement;
	}
	return min;
}

void	jacobsthal() {

	
}

void	insertion(size_t sizeElement, std::vector<int> &list, std::vector<std::pair<std::vector<int>, int> > nonSorted) {
	
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
		max--;
		if (nonSorted[i].second == -1)
			max = list.size() ;
		toInsert = binarySearch(list, min, max, nonSorted[i].first[sizeElement - 1], sizeElement);
		std::vector<int>::iterator iterator;
		if (sizeElement == 1)
		{
			iterator = list.begin() + toInsert;
			list.insert(iterator, nonSorted[i].first[0]);
		}
		else 
		{
			for (int j = sizeElement - 1 ; j >= 0; j--)
			{
				if (toInsert == 0)
					iterator = list.begin();
				else
					iterator = list.begin() + (toInsert - (sizeElement - 1));
				list.insert(iterator, nonSorted[i].first[j]);
			}
		}
	}
	//printList("", list, sizeElement);
}

void	extraction(std::vector<std::pair<std::vector<int>, int> > &nonSorted, std::vector<int> &list, size_t sizeElement, int nbElement) {
	
	std::vector<int>::iterator currentElement = list.begin() + (2 * sizeElement);
	std::vector<int>::iterator start = currentElement;
	std::vector<int>::iterator end = currentElement + sizeElement;

	int nbToExtract = ((nbElement / 2) - 1) + (nbElement % 2 != 0);

	for (int j = 0; j < nbToExtract; j++) {
		
		if (nbElement % 2 == 1 && j == nbToExtract - 1)
		{
			nonSorted.push_back(std::make_pair(std::vector<int>(start, end), -1));
			start = list.erase(start, end);
			start += sizeElement;
			end = start + sizeElement;
		}
		else
		{
			nonSorted.push_back(std::make_pair(std::vector<int>(start, end), *end));
			start = list.erase(start, end);
			start += sizeElement;
			end = start + sizeElement;
		}
	}
}

void	sortFJ(std::vector<int> &list, size_t sizeElement) {
	
	int nbElement = list.size() / sizeElement;

	if (nbElement <=  1)
		return ;
	sortElement(list, sizeElement, nbElement);
	//printList("", list, sizeElement);
	sortFJ(list, sizeElement * 2);
	//std::cout << std::endl;
	std::vector<std::pair<std::vector<int>, int> >nonSorted;
	nbElement = list.size() / sizeElement;
	//printList("", list, sizeElement);
	if (nbElement < 1)//j'avais mis 3
		return;
	extraction(nonSorted, list, sizeElement, nbElement);
	//std::cout << std::endl;
	//printList("", list, sizeElement);
	//displayPair(nonSorted);
	//std::cout << std::endl;
	insertion(sizeElement, list, nonSorted);
	//std::cout << "sorted : " << is_sorted(list, sizeElement) << std::endl;
}
	
	