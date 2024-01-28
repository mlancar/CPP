/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:48 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 16:53:53 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
	
	public:
		ClapTrap(std::string name = "default");
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		ClapTrap	&operator=(ClapTrap const& rhs);

		std::string		getName();
		unsigned int	getAttackDamage();
		int				getHitPoints();
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		void	displayState() const;
		
		protected:
			std::string		_name;
			int				_hitPoints;
			int				_energyPoints;
			unsigned int	_attackDamage;
			std::string		_className;
};

#endif