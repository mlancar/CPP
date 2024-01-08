/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:02:45 by malancar          #+#    #+#             */
/*   Updated: 2024/01/05 20:24:46 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
    public:
        Zombie();
        ~Zombie();
        
    private:
		void	annouce(void);
        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);
		
        std::string	_name;
};

#endif