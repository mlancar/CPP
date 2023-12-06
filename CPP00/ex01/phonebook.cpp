/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:14:00 by malancar          #+#    #+#             */
/*   Updated: 2023/12/06 16:57:47 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

void	setFirstName(std::string str)
{
	std::cin >> str;
}

void	PhoneBook::addContact(void)
{
	std::string	str;
	
	std::cout << "Please enter your informations to register to my amazing PhoneBook" << std::endl;
	std::cout << "What's your name ?" << std::endl;
	//std::cin >> str;
	//std::cout << str << std::endl;
	contact[0].setFirstName(str);
	std::cout << str << ", and your last name is ?" << std::endl;
	// std::cin >> last_name;
	// std::cout << "So, " << last_name << "how do your friends call you ? What your nickname ?" << std::endl;
	// std::cin >> nickname;
	// std::cout << "Cute, and finafinally, what's your number ?" << std::endl;
	// std::cin >> phone_number;

}

// void	PhoneBook::phoneBook(void)
// {

// }