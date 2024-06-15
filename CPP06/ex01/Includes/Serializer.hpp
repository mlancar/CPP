/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:47:58 by malancar          #+#    #+#             */
/*   Updated: 2024/06/15 18:14:50 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data {
	
};

class Serializer
{
	public:
		~Serializer();
		
		static uintptr_t	serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);

	private:
		Serializer();
};

#endif