/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:43:36 by malancar          #+#    #+#             */
/*   Updated: 2024/01/30 15:50:05 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {

	public:
		Dog();
		Dog(Dog const& copy);
		virtual ~Dog();

		Dog	&operator=(Dog const &rhs);
		
		virtual void	makeSound() const;
	private:
		Brain*	_brain;
};

#endif