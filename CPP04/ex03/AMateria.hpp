/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:24:55 by malancar          #+#    #+#             */
/*   Updated: 2024/02/01 18:31:55 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	
	public:
		AMateria(std::string const& type);
		AMateria(AMateria const& copy);
		~AMateria();
	
		AMateria	&operator=(AMateria const& rhs);
		
		std::string const&	getType() const;

		virtual AMateria* clone() const = 0;
		//virtual void use(ICharacter& target);
	
	protected:
		std::string	const type;
		
	
};

#endif