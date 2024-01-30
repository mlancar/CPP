/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:34:26 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 19:56:29 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const& copy);
		virtual ~WrongAnimal();

		WrongAnimal	&operator=(WrongAnimal const &rhs);
		
		std::string	getType() const;

		void	makeSound() const;

	protected:
		std::string	type;
};

#endif