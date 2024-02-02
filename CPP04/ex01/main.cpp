/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:32 by malancar          #+#    #+#             */
/*   Updated: 2024/02/02 16:28:35 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	int size = 10;
	//const Animal* dog = new Dog();
	//const Animal* cat = new Cat();
	//const Animal* cat2 = cat;

	Animal*  *animals = new Animal*[size];
	//type                       type
	 // type a l inteireur du tableau  * nom du tableau = new type a l inteireur du tableau [taille du tableua ]

	for (int i = 0; i < (size / 2) ;i++)
	{
		std::cout << i << ": " ;
		animals[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = (size / 2); i < size; i++)
	{
		std::cout << i << ": " ;
		animals[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": " ;
		delete animals[i];
	}
	std::cout << std::endl;
	delete[] animals;

	Cat chat;
	{
	Cat chat2 = chat;
	}
	return 0;
}
