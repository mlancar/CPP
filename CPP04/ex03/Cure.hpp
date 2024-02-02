/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:54:14 by malancar          #+#    #+#             */
/*   Updated: 2024/02/01 17:35:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {

    public:
        Cure();
        Cure(Cure const& copy);
        ~Cure();
        
        Cure    &operator=(Cure const& rhs);

        void    use(ICharacter &target);
};

#endif