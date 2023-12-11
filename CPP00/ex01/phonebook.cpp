/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:14:00 by malancar          #+#    #+#             */
/*   Updated: 2023/12/11 19:59:59 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void	PhoneBook::addContact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber)
{
	_contact[_index].setFirstName(firstName);
	_contact[_index].setLastName(lastName);
	_contact[_index].setNickname(nickname);
	_contact[_index].setDarkestSecret(darkestSecret);
	_contact[_index].setPhoneNumber(phoneNumber);
	_index++;
}

PhoneBook::PhoneBook(): _index(0)
{

}

PhoneBook::~PhoneBook()
{

}
