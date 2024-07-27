/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:16:40 by malancar          #+#    #+#             */
/*   Updated: 2024/07/27 19:14:39 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	
	RPN rpn;
	
	if (ac != 2) {
		std::cerr << "Expected two arguments" << std::endl;
		return 0;
	}
	try {
		rpn.casio90plusE(av[1]);
	}
	catch (std::exception const& e) {
		std::cout << e.what() << std::endl;
	}
}