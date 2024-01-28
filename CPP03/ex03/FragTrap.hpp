/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:48:53 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 16:54:25 by malancar         ###   ########.fr       */
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
		
		FragTrap	&operator=(FragTrap const& rhs);

		int				getHitPoints();
		unsigned int	getAttackDamage();
		
		void	highFivesGuys();
		
	protected:
		// std::string		_name;
		// int				_hitPoints;
		// int				_energyPoints;
		// unsigned int	_attackDamage;
		// std::string		_className;
		
};

#endif