/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:39:23 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 19:57:24 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
	WrongCat();
	WrongCat(WrongCat const& copy);
	virtual ~WrongCat();

	WrongCat	&operator=(WrongCat const &rhs);
};

#endif