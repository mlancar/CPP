/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:18:48 by malancar          #+#    #+#             */
/*   Updated: 2024/01/25 14:38:21 by malancar         ###   ########.fr       */
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

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		void	displayState() const;
		
		protected:
			//ClapTrap(std::string name = "default", int hitPoints = 10, int energyPoints = 10, int attackDamage = 0, std::string className = "ClapTrap");
			std::string		_name;
			int				_hitPoints;
			int				_energyPoints;
			unsigned int	_attackDamage;
			std::string		_className;
		
};

#endif