/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:20:45 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 16:54:33 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap {

	public:
		ScavTrap(std::string name= "default");
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const& rhs);
		
		int		getEnergyPoints();
		
		void	attack(std::string const &target);
		void	guardGate();

	protected:
		// std::string		_name;
		// int				_hitPoints;
		// int				_energyPoints;
		// unsigned int	_attackDamage;
		// std::string		_className;
};

#endif