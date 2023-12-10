/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:07:08 by malancar          #+#    #+#             */
/*   Updated: 2023/12/10 18:13:20 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook {

	public:
		void	addContact(void);
	
	private:
		Contact	contact[8];

};

#endif