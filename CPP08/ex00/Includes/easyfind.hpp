/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:49:25 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 15:25:57 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>


template <typename T>
	void	easyfind(T container, int index) {
		
		if (find(container.begin(), container.end(), index) == container.end())
			throw std::invalid_argument("Couldn't find: ");
	}

#endif