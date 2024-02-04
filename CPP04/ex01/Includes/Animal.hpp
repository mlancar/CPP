/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:44:59 by malancar          #+#    #+#             */
/*   Updated: 2024/01/30 15:31:22 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

	public:
		Animal();
		Animal(Animal const& copy);
		virtual ~Animal();

		std::string	getType() const;

		Animal	&operator=(Animal const &rhs);
		
		virtual void	makeSound() const;
		
	protected:
		std::string	type;
		
};

#endif