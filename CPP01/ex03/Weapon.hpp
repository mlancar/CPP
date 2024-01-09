/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:17:27 by malancar          #+#    #+#             */
/*   Updated: 2024/01/09 17:49:39 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	
	public:
		Weapon(std::string weapon);
		~Weapon();
		const std::string&	getType() const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif