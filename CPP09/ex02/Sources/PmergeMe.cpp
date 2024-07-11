/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:49 by malancar          #+#    #+#             */
/*   Updated: 2024/07/11 21:06:57 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

void	PmergeMe::displayVector(std::vector<std::pair<int, int> > list) {
	
	// for (std::vector<int>::iterator it = _ceciEstUnVector.begin(); it != _ceciEstUnVector.end();it++) {
	// 	std::cout << *it << std::endl;
	// }
	for (size_t i = 0; i < list.size(); ++i) {
		std::cout << "[" <<  list[i].first << ", " << list[i].second << "]" << std::endl;
	}
	std::cout << std::endl;
}
void	PmergeMe::parse(char **arg, std::vector<std::pair<int, int> > &list) {

	//GROS CACA :))))))))))
	std::string input;
	int value;
	int i = 1;
	int j = 0;
	int previousValue = 0;
	
	while (arg[i]) {
		std::stringstream inputStream(arg[i]);
		while (inputStream >> input)
		{
			//std::cout << "input = " << input << std::endl;
			value = atoi(input.c_str());
			//std::cout << "value = " << value << std::endl;
			if (value < 0)
				throw std::invalid_argument("Only positive number allowed: " + input);
			j++;
			_ceciEstUnVector.push_back(value);
			//si la liste est paire c'est ok
			if (j % 2 == 0)
			{
				//std::cout << "ici = " << value << std::endl;
				//std::cout << "previous = " << previousValue << std::endl;
				if (previousValue >= 0)
					list.push_back(std::make_pair(previousValue, value));
				previousValue = -1;
			}
			else if (j % 2 == 1)
			{
				previousValue = value;
			}
		}
		i++;
	}
	if (previousValue > 0)
		_ceciEstUnVectorDePaires.push_back(std::make_pair(previousValue, -1));
	if (j == 1)
		throw std::invalid_argument(input);
}

void	PmergeMe::sortPair(std::vector<int> &list) {

	// for (size_t i = 0; i < list.size(); ++i) {
	// 	if (list[i].second >= 0 &&  list[i].first > list[i].second)
	// 	{
	// 		std::cout << "swap first = " << list[i].first << " with second = " << list[i].second << std::endl;
	// 		std::swap(list[i].first, list[i].second);
	// 	}
	// }
	for (size_t i = 0; i < list.size(); ++i) {

		if (list[i] > list[i + 1])
			std::swap(list[i], list[i + 1]);
	}
}

void	PmergeMe::sortFJ(std::vector<int> &list, int index, int size) {
	
	//std::vector<std::pair<int,int> > newList;
	int previousValue = 0;
	int j = 0;
	
	//std::cout << "condition recursion = " << (list.size()) << " > 2" << std::endl;
	std::cout << "size list = " << list.size() << std::endl;
	if (list.size() < 1)
		return ;
	sortPair(list);
	for (size_t i = 0; i < list.size(); i++) {
		
		if (j % 2 == 1)
		{
			if (previousValue < list[i].second)
			{
				
				std::cout << "test la" << std::endl;
				for (int j = 0; j < size; j++) {
					
				}
				newList.push_back(std::make_pair(previousValue, list[i]);
			}
			else if (previousValue > list[i])
			{
				std::cout << "test ici" << std::endl;
				std::cout << "value = " << list[i]<< "previous = " <<  previousValue << std::endl;
				newList.push_back(std::make_pair(list[i] previousValue));
				
			}
		}
		else if (j % 2 == 0)
			previousValue = list[i].second;
		j++;
	}
	index++;
	std::cout << "RECURSSION: " << index << std::endl;
	displayVector(list);
	sortFJ(newList, index, size);
	std::cout << "APRES RECURSSION: " << index << std::endl;
	displayVector(list);
}
	
	//_previousValue = _ceciEstUnVectorDePaires[_index].second;
				// tmp = _ceciEstUnVectorDePaires[0];
				// _ceciEstUnVectorDePaires[0] = _ceciEstUnVectorDePaires[i];
				// _ceciEstUnVectorDePaires[i] = tmp;
			//std::cout << "ici = " << _ceciEstUnVectorDePaires[i].second << std::endl;
	//_previousValue = list[_index].second;
		// if (list[i].first < list[i].second)
		// {
		// 	int j =  _sizeElement;
		// 	while(j != 0)
		// 	{
		// 		std::cout << " j = " << j << std::endl;
		// 		//std::cout << "test par la " << std::endl;
		// 		std::swap(list[j], list[j / 2]);
		// 		j = j / 2;
				
		// 	}
			
		// }
	//std::cout << "ici size element = " << _sizeElement << std::endl;	
	// _sizeElement *= 2;
	//std::cout << "la size element = " << _sizeElement << std::endl;
	//_index++;