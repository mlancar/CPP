/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:20:22 by malancar          #+#    #+#             */
/*   Updated: 2024/01/15 16:36:25 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	
	public:
		HumanB(const std::string &name);
		HumanB(const std::string &name, Weapon &weapon);
		~HumanB();

		void	setWeapon(Weapon &weapon);
		
		void	attack() const;
		
	private:

		std::string	_name;
		Weapon		*_weapon;
};

#endif