/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:44:59 by malancar          #+#    #+#             */
/*   Updated: 2024/01/30 15:49:02 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {

	public:
		AAnimal();
		AAnimal(AAnimal const& copy);
		virtual ~AAnimal();

		std::string	getType() const;

		AAnimal	&operator=(AAnimal const &rhs);
		
		virtual void	makeSound() const = 0;
		
	protected:
		std::string	type;
		
};

#endif