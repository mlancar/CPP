/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:47:27 by malancar          #+#    #+#             */
/*   Updated: 2024/01/29 12:40:00 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
	
	public:
		Cat();
		Cat(Cat const& copy);

		virtual ~Cat();// pas oblige de mettre virtual poru les classes fille ?
		
		Cat	&operator=(Cat const &rhs);


		virtual void	makeSound() const;
};

#endif
