/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:46:16 by malancar          #+#    #+#             */
/*   Updated: 2023/12/10 18:26:39 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void	getContact()
{
	std::string	str;
	
	std::cout << "Please enter your informations to register to my amazing PhoneBook" << std::endl;
	std::cout << "What's your name ?" << std::endl;
	std::cin >> str;
	contact[0].setFirstName(str);
	//std::cout << str << std::endl;
	std::cout << contact[0].getFirstName() << ", and your last name is ?" << std::endl;
	// std::cin >> last_name;
	// std::cout << "So, " << last_name << "how do your friends call you ? What your nickname ?" << std::endl;
	// std::cin >> nickname;
	// std::cout << "Cute, and finafinally, what's your number ?" << std::endl;
	// std::cin >> phone_number;
}

int	main()
{
	PhoneBook 	phoneBook;
	std::string	str;
	
	while (1)
	{
		std::cin >> str;
		//std::cout << str << std::endl;
		if (str == "ADD")
		{
			getContact();
			addToPhonebook();
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
