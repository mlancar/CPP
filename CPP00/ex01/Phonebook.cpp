/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:14:00 by malancar          #+#    #+#             */
/*   Updated: 2024/01/11 15:00:37 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <stdio.h>
PhoneBook::PhoneBook(): _index(0), _indexMax(0)
{
	//std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	//std::cout << "PhoneBook destroyed" << std::endl;
}

int		PhoneBook::getIndex() const
{
	return _index;
}

void	PhoneBook::setIndex(int index)
{
	_index = index;
}

void	PhoneBook::addContact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber)
{
	if (_index > 7)
		_index = 0;
	_contact[_index].setFirstName(firstName);
	_contact[_index].setLastName(lastName);
	_contact[_index].setNickname(nickname);
	_contact[_index].setDarkestSecret(darkestSecret);
	_contact[_index].setPhoneNumber(phoneNumber);
	//printContacts();
	_index++;
	if (_indexMax < 8)
		_indexMax++;
}

void	PhoneBook::printContact(int index) const
{
	std::cout << "\nPRINT : " << std::endl;
	std::cout << "First name : " << _contact[index].getFirstName() << std::endl;
	std::cout << "Last name : " << _contact[index].getLastName() << std::endl;
	std::cout << "Nickname : " << _contact[index].getNickname() << std::endl;
	std::cout << "Darkest secret : " << _contact[index].getDarkestSecret() << std::endl;
	std::cout << "Phone number : " << _contact[index].getPhoneNumber() << std::endl;
}

void	PhoneBook::printContacts() const
{
	for(int i = 0; i <= getIndex() ; i++)
		printContact(i);
}

void	PhoneBook::displayContact(std::string input) const
{
	int	index;

	std::stringstream sIndex;
	sIndex << input;
	sIndex >> index;
	
	std::cout << "First name : " << _contact[index].getFirstName() << std::endl;
	std::cout << "Last name : " << _contact[index].getLastName() << std::endl;
	std::cout << "Nickname : " << _contact[index].getNickname() << std::endl;
	std::cout << "Darkest secret : " << _contact[index].getDarkestSecret() << std::endl;
	std::cout << "Phone number : " << _contact[index].getPhoneNumber() << std::endl;
}

void	PhoneBook::displayContacts() const
{
	std::stringstream	sIndex;
	std::string	input;
	
	for (int i = 0; i < 45 ; i++)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << "|";
	displayInfo("Index");
	std::cout << "|";
	displayInfo("First name");
	std::cout << "|";
	displayInfo("Last name");
	std::cout << "|";
	displayInfo("Nickname");
	std::cout << "|";
	std::cout << std::endl;
	for (int i = 0; i < 45 ; i++)
		std::cout << "-";
	std::cout << std::endl;
	
	for (int i = 0; i < _indexMax; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		displayInfo(_contact[i].getFirstName());
		std::cout << "|";
		displayInfo(_contact[i].getLastName());
		std::cout << "|";
		displayInfo(_contact[i].getNickname());
		std::cout << "|";
		std::cout << std::endl;
		for (int i = 0; i < 45 ; i++)
			std::cout << "-";
		std::cout << std::endl;
	}
	
	std::cout << std::endl << std::endl;
}

void	PhoneBook::displayInfo(std::string info) const
{
	std::string	info_sub;

	if (info.length() > 10)
		info_sub = info.substr(0, 9) + '.';
	else
		info_sub = info.substr(0, 10);
	std::cout << std::setw(10) << info_sub;
}

int		PhoneBook::isIndexValid(std::string input)
{
	int	index;
		
	if (isdigit(input[0]) == 0)
		return 0;
	std::stringstream sIndex;
	sIndex << input;
	sIndex >> index;
	for (int i = 0; i < _indexMax ; i++)
	{
		if (index == i)
			return 1;
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "| Enter a valid index |" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	return 0;
}
