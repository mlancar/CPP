/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:49 by malancar          #+#    #+#             */
/*   Updated: 2024/07/10 20:10:39 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _sizeElement(1), _index(0), _previousValue(0)
{
}

PmergeMe::~PmergeMe()
{
}

void	PmergeMe::displayVector() {
	
	// for (std::vector<int>::iterator it = _ceciEstUnVector.begin(); it != _ceciEstUnVector.end();it++) {
	// 	std::cout << *it << std::endl;
	// }
	for (size_t i = 0; i <_ceciEstUnVectorDePaires.size(); ++i) {
		std::cout << "[" <<  _ceciEstUnVectorDePaires[i].first << ", " << _ceciEstUnVectorDePaires[i].second << "]" << std::endl;
	}
	std::cout << std::endl;
}
void	PmergeMe::parse(char **arg) {

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
					_ceciEstUnVectorDePaires.push_back(std::make_pair(previousValue, value));
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

void	PmergeMe::swapInsidePair() {

	for (size_t i = 0; i <_ceciEstUnVectorDePaires.size(); ++i) {
		if ( _ceciEstUnVectorDePaires[i].second >= 0 &&  _ceciEstUnVectorDePaires[i].first > _ceciEstUnVectorDePaires[i].second)
			std::swap(_ceciEstUnVectorDePaires[i].first, _ceciEstUnVectorDePaires[i].second);
	}
}

void	PmergeMe::swapPair() {
	
	(void)_previousValue;
	(void)_index;
	std::pair<int, int> tmp;
	
	//std::cout << "condition boucle = " << (_ceciEstUnVectorDePaires.size() / (_sizeElement * 2)) << std::endl;
		
	for (int i = 0; i < _sizeElement; i++) {
		
		std::cout << "size / 2 = " << _sizeElement / 2 << std::endl;
		std::cout << "size element = " << _sizeElement << std::endl;
		std::cout << "compare this = " << _ceciEstUnVectorDePaires[_sizeElement].second  << "to " <<  _ceciEstUnVectorDePaires[_sizeElement].second << std::endl;
		if ( _ceciEstUnVectorDePaires[_sizeElement].second < _ceciEstUnVectorDePaires[_sizeElement / 2].second)
		{
			std::cout << "test par la " << std::endl;
			for (int j = 0; j < _sizeElement; j++)
			{
				
				std::swap(_ceciEstUnVectorDePaires[_sizeElement], _ceciEstUnVectorDePaires[_sizeElement]);
				
			}
			
		}
	}
	//_previousValue = _ceciEstUnVectorDePaires[_index].second;
	std::cout << "ici size element = " << _sizeElement << std::endl;	
	_sizeElement *= 2;
	std::cout << "la size element = " << _sizeElement << std::endl;
	//_index++;
	
	displayVector();
	if (_sizeElement < 16)//(_ceciEstUnVectorDePaires.size() / _sizeElement) >= 2)
	{
		swapPair();
	}
	//_previousValue = _ceciEstUnVectorDePaires[_index].second;
				// tmp = _ceciEstUnVectorDePaires[0];
				// _ceciEstUnVectorDePaires[0] = _ceciEstUnVectorDePaires[i];
				// _ceciEstUnVectorDePaires[i] = tmp;
			//std::cout << "ici = " << _ceciEstUnVectorDePaires[i].second << std::endl;
}