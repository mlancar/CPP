/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:56 by malancar          #+#    #+#             */
/*   Updated: 2024/07/24 19:17:18 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <cstdlib>
# include <algorithm>
# include <ctime>
# include <iomanip>


	void	parse(char **arg, std::vector<int> &list);
	void	displayVector(std::vector<int> list);
	void	sortElement(std::vector<int> &list, size_t sizeElement, int nbElement);
	void	swapElement(std::vector<int> &list, size_t sizeElement, size_t firstElement, size_t secondElement);
	void	insertion(size_t sizeElement, std::vector<int> &list, std::vector<std::pair<std::vector<int>, int> > nonSorted);
	int		binarySearch(std::vector<int> &list, int min, int max, int value, size_t sizeElement);
	void	sortFJ(std::vector<int> &list, size_t sizeElement);


#endif