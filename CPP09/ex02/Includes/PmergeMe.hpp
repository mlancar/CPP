/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:56 by malancar          #+#    #+#             */
/*   Updated: 2024/07/11 21:05:33 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <cstdlib>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();

		void	parse(char **arg, std::vector<int> &list);
		void	displayVector(std::vector<int> list);
		void	sortPair(std::vector<int> &list);
		void	sortFJ(std::vector<int> &list, int index, int size);
	private:
		std::vector<int> _ceciEstUnVector;
		std::vector<std::pair<int, int> >	_ceciEstUnVectorDePaires;
		std::vector<int> _vectorTmp;
	
};

#endif