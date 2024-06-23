/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:14:58 by malancar          #+#    #+#             */
/*   Updated: 2024/06/23 14:37:22 by malancar         ###   ########.fr       */
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
		}
		
		Array(Array const& copy) {
			_size = copy._size;
			_nbElement = copy._nbElement;
			 _array = new T[_size];
			for (unsigned int i = 0; i < _nbElement; i++) {
				_array[i] = copy._array[i];
			}
		}
		~Array(){
			delete[] _array;
		}

		Array &operator=(Array const& rhs) {
			_nbElement = rhs._nbElement;
			_size = rhs._size;
			// if (this != rhs) {
			// 	delete[] _array;
			// }
			_array = new T[_size];
			for (unsigned int i = 0; i < _nbElement; i++) {
				_array[i] = rhs._array[i];
			}
			return *this;
		}

		T &operator[](unsigned int index) {
			if (index > _nbElement)
				throw std::out_of_range("out of range");
			return _array[index];
		}
		
		unsigned int size() {
			return _nbElement;	
		}
		void	addElement(T element) {
			if (_nbElement >= _size)
				throw std::out_of_range("out_of_range");
			_array[_nbElement] = element;
			_nbElement++;
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

