/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:20:45 by malancar          #+#    #+#             */
/*   Updated: 2024/01/26 00:13:54 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:
		ScavTrap(std::string name = "default");
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();
		
		void	attack(std::string const &target);
		void	guardGate();

		static void	winner(ScavTrap &fighter1, ScavTrap &fighter2);

		void action();
};

#endif