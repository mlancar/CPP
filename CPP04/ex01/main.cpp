/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:32 by malancar          #+#    #+#             */
/*   Updated: 2024/02/03 17:59:33 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	// int size = 10;
	// //const Animal* dog = new Dog();
	// //const Animal* cat = new Cat();
	// //const Animal* cat2 = cat;

	// Animal*  *animals = new Animal*[size];
	// //type                       type
	//  // type a l inteireur du tableau  * nom du tableau = new type a l inteireur du tableau [taille du tableua ]

	// for (int i = 0; i < (size / 2) ;i++)
	// {
	// 	std::cout << i << ": " ;
	// 	animals[i] = new Cat();
	// }
	// std::cout << std::endl;
	// for (int i = (size / 2); i < size; i++)
	// {
	// 	std::cout << i << ": " ;
	// 	animals[i] = new Dog();
	// }
	// std::cout << std::endl;
	// for (int i = 0; i < size; i++)
	// {
	// 	std::cout << i << ": " ;
	// 	delete animals[i];
	// }
	// std::cout << std::endl;
	// delete[] animals;

	// Cat chat;
	// {
	// Cat chat2 = chat;
	// }
	// return 0;

		std::cout << "\033[1;31m" << "BASIC TEST" << "\033[0m" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << "\033[1;31m" << "ARRAY TEST" << "\033[0m" << std::endl;
	int n(4);
	Animal *tab[n];
	for (int i=0; i < n/2; i++)
		tab[i] = new Dog();
	for (int i=n/2; i < n; i++)
		tab[i] = new Cat();
	std::cout << std::endl;
	
	for(int i = 0; i < n; i++)
		delete tab[i];
	std::cout << std::endl;
	
	std::cout << "\033[1;31m" << "COPY TEST" << "\033[0m" << std::endl;
	const Cat *cpy = new Cat();
	const Animal *aru = new Cat(*cpy);
	const Dog *cpy2 = new Dog();
	const Animal *laurel = new Dog(*cpy2);
	std::cout << std::endl;

	aru->makeSound();
	laurel->makeSound();
	std::cout << std::endl;
	
	delete aru;
	delete cpy;
	delete laurel;
	delete cpy2;
	std::cout << std::endl;

	std::cout << "\033[1;31m" << "ASSIGNEMENT TEST" << "\033[0m" << std::endl;
	const Cat parent = Cat();
	Cat fils = Cat();
	fils = parent;
	std::cout << std::endl;
	
	return 0;
}
