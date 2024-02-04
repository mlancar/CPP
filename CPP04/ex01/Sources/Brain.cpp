/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:16:49 by malancar          #+#    #+#             */
/*   Updated: 2024/02/03 18:01:29 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain is created" << std::endl;
}

Brain::Brain(Brain const& copy)
{
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "A brain is destroyed" << std::endl;
}

Brain	&Brain::operator=(Brain const& rhs)
{
	std::cout << "brain = operator" << std::endl;
	for (int i = 0; i < 100;i++)
		idea[i] = rhs.idea[i];
	return *this;
}
