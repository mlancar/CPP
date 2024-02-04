/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:18:55 by malancar          #+#    #+#             */
/*   Updated: 2024/01/15 16:02:29 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	
	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		
		void	setWeapon(Weapon &weapon);
		
		void	attack() const;
		
	private:

		std::string	_name;
		Weapon		&_weapon;
};

#endif