/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:32:56 by malancar          #+#    #+#             */
/*   Updated: 2024/07/10 17:59:34 by malancar         ###   ########.fr       */
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

		void	parse(char **arg);
		void	displayVector();
		void	swapInsidePair();
		void	swapPair();
	private:
		std::vector<int> _ceciEstUnVector;
		std::vector<std::pair<int, int> >	_ceciEstUnVectorDePaires;
		
		int	_sizeElement;
		int _index;
		int _previousValue;
	
};

#endif