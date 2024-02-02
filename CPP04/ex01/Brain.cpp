/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:16:49 by malancar          #+#    #+#             */
/*   Updated: 2024/02/02 16:33:17 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << " is created" << std::endl;
}

Brain::Brain(Brain const& copy)
{
	(void)copy;
}

Brain::~Brain()
{
	std::cout << " is destroyed" << std::endl;
}

Brain	&Brain::operator=(Brain const& rhs)
{
	(void)rhs;
	return *this;
}
