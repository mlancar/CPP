/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:32 by malancar          #+#    #+#             */
/*   Updated: 2024/01/29 13:00:16 by malancar         ###   ########.fr       */
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
	const WrongAnimal* wrongCat = new WrongCat();

	Animal	animal2;
	Cat		cat2;
	Dog		dog2;
	WrongCat	wrongCat2;
	
	std::cout << std::endl;
	std::cout << "POINTEUR:" << std::endl;
	std::cout << "-Methode make sound virtuelle: " << std::endl;
	std::cout << "My " << animal->getType() << " says ";
	animal->makeSound();
	std::cout << "My " << dog->getType() << " says ";
	dog->makeSound();
	std::cout << "My " << cat->getType() << " says ";
	cat->makeSound();
	std::cout << std::endl;
	std::cout << "-Methode make sound non virtuelle: " << std::endl;
	std::cout << "My "<< wrongCat->getType() << " says ";
	wrongCat->makeSound();
	std::cout << std::endl;


	std::cout << "REFERENCE:" << std::endl;
	std::cout << "-Methode make sound virtuelle: " << std::endl;
	std::cout << "My " << animal2.getType() << " says ";
	animal2.makeSound();
	std::cout << "My " << dog2.getType() << " says ";
	dog2.makeSound();
	std::cout << "My " << cat2.getType() << " says ";
	cat2.makeSound();
	std::cout << std::endl;
	std::cout << "-Methode make sound non virtuelle: " << std::endl;
	std::cout << "My "<< wrongCat2.getType() << " says ";// ca marche pas, parce que c'est pas un pointeur ? 
	wrongCat2.makeSound();

	
	std::cout << std::endl;
	
	//TESTER CONTRUCTEUR PAR COPY
	
	delete animal;
	delete cat;
	delete dog;
	delete wrongCat;
	return 0;
}
