/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:14:00 by malancar          #+#    #+#             */
/*   Updated: 2023/12/14 17:32:04 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(): _index(0)
{
	std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroyed" << std::endl;
}

void	PhoneBook::addContact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber)
{
	_contact[_index].setFirstName(firstName);
	_contact[_index].setLastName(lastName);
	_contact[_index].setNickname(nickname);
	_contact[_index].setDarkestSecret(darkestSecret);
	_contact[_index].setPhoneNumber(phoneNumber);
	//printContact();
	_index++;
}

void	PhoneBook::printContact() const
{
	std::cout << "First name : " << _contact[_index].getFirstName() << std::endl;
	std::cout << "Last name : " << _contact[_index].getLastName() << std::endl;
	std::cout << "Nickname : " << _contact[_index].getNickname() << std::endl;
	std::cout << "Darkest secret : " << _contact[_index].getDarkestSecret() << std::endl;
	std::cout << "Phone number : " << _contact[_index].getPhoneNumber() << std::endl;
}
