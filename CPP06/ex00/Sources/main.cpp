/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:47:51 by malancar          #+#    #+#             */
/*   Updated: 2024/06/15 13:21:54 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {

	if (ac != 2)
	{
		std::cerr << "One parameter expected" << std::endl;
		return 0;
	}
	ScalarConverter::convert(av[1]);
	
}