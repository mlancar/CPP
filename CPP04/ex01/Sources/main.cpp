/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:32 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:33:23 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "\033[1;31m" << "ARRAY TEST" << "\033[0m" << std::endl;
	int size(4);
	Animal *animal[size];
	for (int i = 0; i < size/2; i++)
		animal[i] = new Dog();
	for (int i = size/2; i < size; i++)
		animal[i] = new Cat();
	std::cout << std::endl;
	for(int i = 0; i < size; i++)
		animal[i]->makeSound();
	std::cout << std::endl;
	for(int i = 0; i < size; i++)
		delete animal[i];
	std::cout << std::endl;
	
	std::cout << "\033[1;31m" << "COPY TEST" << "\033[0m" << std::endl;
	const Cat pureCat;
	const Dog pureDog;
	
	const Animal *copyCat = new Cat(pureCat);
	const Animal *copyDog = new Dog(pureDog);
	std::cout << std::endl;

	copyCat->makeSound();
	copyDog->makeSound();
	std::cout << std::endl;
	
	delete copyCat;
	delete copyDog;
	std::cout << std::endl;

	std::cout << "\033[1;31m" << "ASSIGNEMENT TEST" << "\033[0m" << std::endl;
	const Cat parent = Cat();
	Cat fils = Cat();
	fils = parent;
	std::cout << std::endl;
	
	return 0;
}
