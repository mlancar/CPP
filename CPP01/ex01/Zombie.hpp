/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:02:45 by malancar          #+#    #+#             */
/*   Updated: 2024/01/18 14:43:48 by malancar         ###   ########.fr       */
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
        
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif