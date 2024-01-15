/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:02:45 by malancar          #+#    #+#             */
/*   Updated: 2024/01/15 16:28:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        
		void	announce(void);
        void    setName(std::string &name);
        
    private:
        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);
		
        std::string	_name;
        // static const int	_limitMax;
		// static const int	_limitMin;
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

// const int Zombie::_limitMax = 500;
// const int Zombie::_limitMin = 0;

#endif