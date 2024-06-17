/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:14:58 by malancar          #+#    #+#             */
/*   Updated: 2024/06/17 19:58:01 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	public:
		Array(): _size(0), _nbElement(0), _array(new T[_size]){
		}
		
		Array(unsigned int n): _size(n), _nbElement(0), _array(new T[_size]) {
			
			std::cout << "n = " << n << std::endl;
		}
		
		Array(Array const& copy): _size(copy._size), _nbElement(copy._nbElement), _array(copy._array(new T[_size])) {
			
		}
		~Array(){
		}

		unsigned int size() {
			return _nbElement;	
		}
		void	addElement(T element) {
			if (_nbElement < _size)
			{
				_array[_nbElement] = element;
				_nbElement++;
			}
			else
				throw std::out_of_range("out_of_range");
		}
		void	displayArray() {
			
			for(unsigned int i = 0; i < _nbElement;i++) {
				std::cout  << _array[i] << std::endl;
			}
		}
		
	private:
		unsigned int _size;
		unsigned int _nbElement;
		T			*_array;
		
};

#endif

