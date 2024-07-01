/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:39:24 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 17:49:33 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <vector>

template <class T>


class MutantStack : public std::stack<T> {
	
	public:
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		MutantStack() {
			
		}
		~MutantStack() {
			
		}
		
		MutantStack &operator=(MutantStack const& rhs) {
			(void)rhs;
			return *this;
		}

		bool operator==(MutantStack const& rhs) const {
			return this->c == rhs.c;
		}
		
		bool operator!=(MutantStack const& rhs) const {
			return this->c != rhs.c;
		}
		
		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
		
	private:
		
};

#endif