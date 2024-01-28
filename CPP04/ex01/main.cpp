/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:32 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 20:09:45 by malancar         ###   ########.fr       */
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

	{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;
	return 0;
}
