/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:14:00 by malancar          #+#    #+#             */
/*   Updated: 2023/12/14 21:39:05 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(): _index(0)
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

void	PhoneBook::addContact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber)
{
	_contact[_index].setFirstName(firstName);
	_contact[_index].setLastName(lastName);
	_contact[_index].setNickname(nickname);
	_contact[_index].setDarkestSecret(darkestSecret);
	_contact[_index].setPhoneNumber(phoneNumber);
	printContacts();
	_index++;
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

	index = std::stoi(input);
	
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
	std::cout << "|";
	displayInfo(input);
	std::cout << "|";
	displayInfo(_contact[index].getFirstName());
	std::cout << "|";
	displayInfo(_contact[index].getLastName());
	std::cout << "|";
	displayInfo(_contact[index].getNickname());
	std::cout << "|";
	std::cout << std::endl;
}

//je crois aue cette fonction n'est pas tres "C++ manners"
void	PhoneBook::displayInfo(std::string info) const
{
	int	i = 0;
		
	// while (i < 10)
	// {
	// 	while (info[i] && i <= 9)
	// 	{
	// 		std::cout << info[i];
	// 		i++;
	// 	}
	// 	if (info.length() > 10)
	// 	{
	// 		std::cout << ".";
	// 		i++;
	// 	}
	// 	else if (i < 10)
	// 	{
	// 		std::cout << " ";
	// 		i++;
	// 	}
	// }
	std::string	info_sub;

	if (info.length() > 10)
		info_sub = info.substr(0, 9);
	else
		info_sub = info.substr(0, 10);
	std::cout << info_sub;
	if (info.length() > 10)
		std::cout << ".";
	for (int i = info.length() ; i < 10 ; i++)
		std::cout << " ";
}

int		PhoneBook::isIndexValid(std::string input)
{
	int	index;
	
	
	if (isdigit(input[0]) == 0)
		return 0;
	index = std::stoi(input);
	for (int i = 0; i < _index ; i++)
	{
		if (index == i)
			return 1;
	}
	return 0;
}
