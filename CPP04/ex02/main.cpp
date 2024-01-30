/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:37:32 by malancar          #+#    #+#             */
/*   Updated: 2024/01/30 16:14:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	//const AAnimal* animal = new AAnimal();
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();

	//AAnimal	animal2;
	Cat		cat2;
	Dog		dog2;
	WrongCat	wrongCat2;
	
	std::cout << std::endl;
	std::cout << "POINTEUR:" << std::endl;
	std::cout << "-Methode make sound virtuelle: " << std::endl;
	//std::cout << "My " << animal->getType() << " says ";
	//animal->makeSound();
	std::cout << "My " << dog->getType() << " says ";
	dog->makeSound();
	std::cout << "My " << cat->getType() << " says ";
	cat->makeSound();
	std::cout << std::endl;
	std::cout << "-Methode make sound non virtuelle: " << std::endl;
	std::cout << "My "<< wrongCat->getType() << " says ";
	wrongCat->makeSound();
	std::cout << std::endl;
}
