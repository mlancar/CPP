/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:56 by malancar          #+#    #+#             */
/*   Updated: 2024/07/18 17:30:04 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <cstdlib>
# include <algorithm>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();

		void	parse(char **arg, std::vector<int> &list);
		void	displayVector(std::vector<int> list);
		void	sortElement(std::vector<int> &list, size_t sizeElement);
		void	swapElement(std::vector<int> &list, size_t sizeElement, size_t index);
		void	binarySearch(size_t sizeElement, std::vector<int> &list, std::vector<std::pair<std::vector<int>, int> > nonSorted);
		void	sortFJ(std::vector<int> &list, int index, size_t sizeElement);
	private:
		std::vector<int> _ceciEstUnVector;
		std::vector<std::pair<int, int> >	_ceciEstUnVectorDePaires;
		std::vector<int> _vectorTmp;
	
};

#endif