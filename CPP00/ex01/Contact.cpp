/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:51:59 by malancar          #+#    #+#             */
/*   Updated: 2024/01/03 13:16:12 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact()
{
	//std::cout << "Contact created" << std::endl;
}

Contact::~Contact()
{
	//std::cout << "Contact destroyed" << std::endl;
}

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

std::string	Contact::getFirstName() const
{
	return _firstName;
}

std::string	Contact::getLastName() const
{
	return _lastName;
}

std::string	Contact::getNickname() const
{
	return _nickname;
}
std::string	Contact::getDarkestSecret() const
{
	return _darkestSecret;
}

std::string	Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

int		Contact::isPhoneNumberValid(std::string phoneNumber)
{
	if (phoneNumber.empty())
	{
		std::cout << "Enter a number" << std::endl;
		return 0;
	}
	for(size_t i = 0; i < phoneNumber.length() ; i++)
	{
		if (isdigit(phoneNumber[i]) == 0)
		{
			std::cout << "Enter a number" << std::endl;
			return 0;
		}
	}
	return 1;
	//return !phoneNumber.empty();
}

int	Contact::isInfoValid(std::string info, std::string errorMessage)
{
	if (info.empty())
	{
		std::cout << errorMessage << " : " << std::endl;
		return 1;
	}
	return 0;
}