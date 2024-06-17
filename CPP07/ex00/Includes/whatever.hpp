/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:01:41 by malancar          #+#    #+#             */
/*   Updated: 2024/06/17 15:45:44 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

class whatever
{
	public:

		void swap(T &a, T &b) {
			T tmp;

			tmp = a;
			a = b;
			b = tmp;
		}
		T min(T &a, T &b) {
			if (a < b)
				return a;
			else
				return b;
		}
		T max(T &a, T &b) {
			if (a > b)
				return a;
			else
				return b;
		}
	private:
};




#endif