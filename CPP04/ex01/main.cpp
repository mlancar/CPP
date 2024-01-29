/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:32 by malancar          #+#    #+#             */
/*   Updated: 2024/01/29 18:17:46 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	// const Animal* animal = new Animal();
	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();
	// const WrongAnimal* wrongCat = new WrongCat();
	
	// std::cout << std::endl;
	// std::cout << "My " << animal->getType() << " says ";
	// animal->makeSound();
	// std::cout << "My " << dog->getType() << " says ";
	// dog->makeSound();
	// std::cout << "My " << cat->getType() << " says ";
	// cat->makeSound();
	// std::cout << "My "<< wrongCat->getType() << " says ";
	// wrongCat->makeSound();
	// std::cout << std::endl;
	
	// delete animal;
	// delete cat;
	// delete dog;
	// delete wrongCat;

	unsigned int size = 10;
	//const Animal* dog = new Dog();
	//const Animal* cat = new Cat();
	 (Animal*)  *animals = new (Animal*)[size];
	//type                       type
	 // type a l inteireur du tableau  * nom du tableau = new type a l inteireur du tableau [taille du tableua ]

	for (unsigned int i = 0; i < (size / 2) ;i++)
	{
		animals[i] = new Cat();
		
		
	}
	
	
	return 0;
}
