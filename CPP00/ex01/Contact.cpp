/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:51:59 by malancar          #+#    #+#             */
/*   Updated: 2023/12/11 18:59:33 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void		Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

void		Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

void		Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

void		Contact::setDarkestSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

void		Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}
