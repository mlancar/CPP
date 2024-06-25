/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:39:24 by malancar          #+#    #+#             */
/*   Updated: 2024/06/25 18:13:00 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

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

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
		
	private:
		
};

#endif