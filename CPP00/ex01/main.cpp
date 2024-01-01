/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:46:16 by malancar          #+#    #+#             */
/*   Updated: 2024/01/01 20:01:56 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void	createContact(PhoneBook &phoneBook)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	darkestSecret;
	std::string	phoneNumber;
	
	std::cout << std::endl;
	std::cout << "Please enter your informations to register to my crappy awesome PhoneBook" << std::endl;
	std::cout << "First name : ";
	do
	{
		if(!std::getline(std::cin, firstName))
			return ;
	}
	while(Contact::isInfoValid(firstName, "Enter a valid first name"));
	std::cout << "Last name : ";
	do
	{
		if (!std::getline(std::cin, lastName))
			return ;
	}
	while(Contact::isInfoValid(lastName,  "Enter a valid last name"));
	std::cout << "Nickname :  ";
	do
	{
		if (!std::getline(std::cin, nickname))
			return ;
	}
	while (Contact::isInfoValid(nickname,  "Enter a valid nickname"));
	std::cout << "Darkest secret : ";
	do 
	{
		if (!std::getline(std::cin, darkestSecret))
			return ;
	}
	while (Contact::isInfoValid(darkestSecret, "Enter a valid Secret"));
	std::cout << "Phone number : ";
	do
	{
		if (!std::getline(std::cin, phoneNumber))
			return ;
	}
	while (Contact::isPhoneNumberValid(phoneNumber) == 0);
	phoneBook.addContact(firstName, lastName, nickname, darkestSecret, phoneNumber);
	std::cout << "A contact is registered" << std::endl <<std::endl;
}


int	main()
{
	PhoneBook 	phoneBook;
	std::string	input;
	
	while (1)
	{
		std::cout << "Enter ADD, SEARCH, or EXIT" << std::endl;
		if (!getline(std::cin, input))
			break;
		if (input == "ADD")
		{
			createContact(phoneBook);
			//phoneBook.printContact();
		}
		if (input == "SEARCH")
		{
			getline(std::cin, input);
			if (phoneBook.isIndexValid(input) == 1)
				phoneBook.displayContact(input);
		}
		if (input == "EXIT")
			break;
	}
	return 0;
	
}

