/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:17:01 by malancar          #+#    #+#             */
/*   Updated: 2024/01/28 19:59:10 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();
		Brain(Brain const& copy);
		~Brain();

		Brain	&operator=(Brain const &rhs);
		
	private:
		std::string	idea[100];

};

#endif