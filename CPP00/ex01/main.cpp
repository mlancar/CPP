/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:46:16 by malancar          #+#    #+#             */
/*   Updated: 2023/12/14 17:37:27 by malancar         ###   ########.fr       */
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
	
	std::cout << "Please enter your informations to register to my crappy awesome PhoneBook" << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, firstName);
	std::cout << "Last name : ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname :  ";
	std::getline(std::cin, nickname);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, darkestSecret);
	std::cout << "Phone number : ";
	std::getline(std::cin, phoneNumber);
	phoneBook.addContact(firstName, lastName, nickname, darkestSecret, phoneNumber);
	//phoneBook.printContact();
}


int	main()
{
	PhoneBook 	phoneBook;
	std::string	input;
	
	while (1)
	{
		getline(std::cin, input);
		if (input == "ADD")
		{
			createContact(phoneBook);
			//phoneBook.printContact();
			
		}
		break ;
		// 	addContact();
		// else if (str == "SEARCH")
		// 	//function
		// else if (str == "EXIT")
		// 	//function
	}
	return 0;
	
}

//// std::cin >> last_name;
	// std::cout << "So, " << last_name << "how do your friends call you ? What your nickname ?" << std::endl;
	// std::cin >> nickname;
	// std::cout << "Cute, and finafinally, what's your number ?" << std::endl;
	// std::cin >> phone_number;