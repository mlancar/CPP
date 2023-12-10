/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:51:59 by malancar          #+#    #+#             */
/*   Updated: 2023/12/10 18:23:41 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void		Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

std::string	Contact::getFirstName() const
{
	return _firstName;
}