/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:46:16 by malancar          #+#    #+#             */
/*   Updated: 2023/12/06 16:44:06 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"


int	main()
{
	PhoneBook 	phoneBook;
	// Contact		contact;
	std::string	str;
	
	while (1)
	{
		std::cin >> str;
		//std::cout << str << std::endl;
		if (str == "ADD")
			phoneBook.addContact();
		break ;
		// 	addContact();
		// else if (str == "SEARCH")
		// 	//function
		// else if (str == "EXIT")
		// 	//function
	}
	return 0;
	
}
