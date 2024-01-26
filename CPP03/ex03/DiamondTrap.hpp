/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:07:20 by malancar          #+#    #+#             */
/*   Updated: 2024/01/26 18:25:33 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
#define	DIAMONTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public virtual ScavTrap, public virtual FragTrap {

	public:
		DiamondTrap(std::string name = "default");
		DiamondTrap(DiamondTrap const &copy);
		~DiamondTrap();
		
		std::string	getName();

		int				getHitPoints();
		unsigned int	getAttackDamage();
		int				getEnergyPoints();
		
		void	whoAmI();
		
	private:
		std::string	_name;
};

#endif