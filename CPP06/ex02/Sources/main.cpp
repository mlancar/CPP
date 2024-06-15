/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:40:39 by malancar          #+#    #+#             */
/*   Updated: 2024/06/15 19:34:58 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate() {
	
	std::srand(std::time(NULL));
	int random_value = std::rand();
	if (random_value % 3 == 0)
	{
		A *zero;
		return zero;
	}
	else if (random_value % 3 == 1)
	{
		B *one;
		return one;
	}
	else if (random_value % 3 == 2)
	{
		C *two;
		return two;
	}
	return NULL;
}

void	identify(Base *p) {

	
}

int main() {

	
}