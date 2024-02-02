/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:57:35 by malancar          #+#    #+#             */
/*   Updated: 2024/02/01 17:35:03 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria {

    public:
        Ice();
        Ice(Ice const& copy);
        ~Ice();

        Ice &operator=(Ice const& rhs);

        void    use(ICharacter &target);
        
    
};

#endif