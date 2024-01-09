/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:07:08 by malancar          #+#    #+#             */
/*   Updated: 2024/01/09 16:52:23 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		
		int		isIndexValid(std::string input);
		
		int		getIndex() const;
		void	setIndex(int index);

		void	addContact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber);
		void	displayContacts() const;
		void	displayContact(std::string input) const;
		void	displayInfo(std::string info) const;
		void	printContact(int index) const;
		void	printContacts() const;

	private:
		Contact	_contact[8];
		int		_index;
		int		_indexMax;
};

#endif