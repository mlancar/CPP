/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:48:53 by malancar          #+#    #+#             */
/*   Updated: 2024/01/26 15:06:26 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FragTrap : public ClapTrap {

	public:
		FragTrap(std::string name = "default");
		FragTrap(FragTrap const &copy);
		~FragTrap();
		
		void	highFivesGuys();
		void	action();
};

#endif