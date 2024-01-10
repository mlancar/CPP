/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:17:27 by malancar          #+#    #+#             */
/*   Updated: 2024/01/10 02:21:54 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	
	public:
		Weapon();
		Weapon(std::string weaponType);
		~Weapon();
		const std::string&	getType() const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif