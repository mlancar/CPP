/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:40:39 by malancar          #+#    #+#             */
/*   Updated: 2024/06/22 15:08:15 by malancar         ###   ########.fr       */
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
		return dynamic_cast<Base *>(new A);
	else if (random_value % 3 == 1)
		return dynamic_cast<Base *>(new B);
	else
		return dynamic_cast<Base *>(new C);
}

void	identify(Base *p) {

	if (dynamic_cast<A*>(p) != 0)
		std::cout << "type: A" << std::endl;
	else if (dynamic_cast<B*>(p) != 0)
		std::cout << "type: B" << std::endl;
	else if (dynamic_cast<C*>(p) != 0)
		std::cout << "type: C" << std::endl;
	else
		std::cout << "cannot identify type" << std::endl;
}

void	identify(Base &p) {
	
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "type: A" << std::endl;
		return ;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "type: B" << std::endl;
		return;
	}
	catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;	
	}
	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "type: C" << std::endl;
		return;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int main() {

	Base	*base;
	Base	*base2;
	Base	*base3;
	
	base  = generate();
	sleep(1);
	base2  = generate();
	sleep(1);
	base3 = generate();
	std::cout << "Identify by using pointer: " << std::endl;
	identify(base);
	identify(base2);
	identify(base3);
	std::cout << std::endl;
	std::cout << "Identify by using reference: " << std::endl;
	identify(base);
	identify(base2);
	identify(base3);
}
