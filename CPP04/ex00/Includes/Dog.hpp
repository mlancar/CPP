/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:43:36 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 19:55:36 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {

	public:
		Dog();
		Dog(Dog const& copy);
		virtual ~Dog();

		Dog	&operator=(Dog const &rhs);
		
		virtual void	makeSound() const;
	private:
	
};

#endif