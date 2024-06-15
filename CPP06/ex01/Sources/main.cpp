/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:03:23 by malancar          #+#    #+#             */
/*   Updated: 2024/06/15 18:20:01 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	
	Data ptr;
	uintptr_t raw;

	
	std::cout << "ptr = " << &ptr << std::endl;
	raw = Serializer::serialize(&ptr);
	std::cout << "raw = " << raw << std::endl;
	std::cout << "hex raw = " << std::hex << "0x" << raw << std::endl;
	
	
}