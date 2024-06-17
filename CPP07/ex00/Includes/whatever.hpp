/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:01:41 by malancar          #+#    #+#             */
/*   Updated: 2024/06/17 16:21:48 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

	void swap(T &a, T &b) {
		T tmp;

		tmp = a;
		a = b;
		b = tmp;
	}

template <typename T>
		T min(T &a, T &b) {
			if (a < b)
				return a;
			else
				return b;
		}


template <typename T>
		T max(T &a, T &b) {
			if (a > b)
				return a;
			else
				return b;
		}






#endif