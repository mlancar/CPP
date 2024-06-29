/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:45:58 by malancar          #+#    #+#             */
/*   Updated: 2024/06/26 14:41:56 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
#define AWESOME_HPP

#include "iostream"

class awesome
{	
	private:
		int _n;
	public:
		awesome(): _n(42) {
			return;
		}
		~awesome() {
		}
		
		int get() const {
			return _n;
		}
};

std::ostream &operator<<(std::ostream &o, awesome const& rhs) {
	return o << rhs.get();
	
}

template<typename T>

void print(T const& x) {
	std::cout << x << std::endl;
	return;
}

#endif
