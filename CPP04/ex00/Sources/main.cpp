/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:32 by malancar          #+#    #+#             */
/*   Updated: 2024/02/04 15:30:46 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	//cat est un pointeur sur animal, donc on sait pas si c'est un chat ou un chien ou un animal
	const WrongAnimal* wrongCat = new WrongCat();

	const Cat pureCat;
	const Dog pureDog;

	const Animal *copyAnimal = new Animal(*animal);
	const Animal *copyCat = new Cat(pureCat);
	const Animal *copyDog = new Dog(pureDog);
	
	std::cout << std::endl;
	std::cout << "METHODE MAKE SOUND VIRTUELLE: " << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl;
	std::cout << "METHODE MAKE SOUND NON VIRTUELLE: " << std::endl;
	wrongCat->makeSound();
	std::cout << std::endl;

	std::cout << "TEST PAR COPY:" << std::endl;
	copyAnimal->makeSound();
	copyDog->makeSound();
	copyCat->makeSound();
	std::cout <<std::endl;
	
	delete animal;
	delete cat;
	delete dog;
	delete wrongCat;
	delete copyAnimal;
	delete copyCat;
	delete copyDog;
	return 0;
}
