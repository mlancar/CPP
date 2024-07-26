/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:56 by malancar          #+#    #+#             */
/*   Updated: 2024/07/26 18:25:00 by malancar         ###   ########.fr       */
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
# include <deque>

extern int g_cmp;

	void	parse(char **arg, std::vector<int> &list);
	void	displayVector(std::vector<int> list);
	void	sortFJ(std::vector<int> &list, size_t sizeElement);

	void	parseDeque(char **arg, std::deque<int> &list);

	void	displayDeque(std::deque<int> list);
	void	sortFJDeque(std::deque<int> &list, size_t sizeElement);


#endif