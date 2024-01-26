/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:48:53 by malancar          #+#    #+#             */
/*   Updated: 2024/01/26 17:30:10 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FragTrap : virtual public ClapTrap {

	public:
		FragTrap(std::string name = "default");
		FragTrap(FragTrap const &copy);
		~FragTrap();
		

		int				getHitPoints();
		unsigned int	getAttackDamage();
		
		void	highFivesGuys();
		
	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		unsigned int	_attackDamage;
		std::string		_className;
		
};

#endif