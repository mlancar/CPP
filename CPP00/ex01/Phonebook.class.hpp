/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:07:08 by malancar          #+#    #+#             */
/*   Updated: 2023/12/06 16:40:14 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
#define PHONE_BOOK_CLASS_HPP

# include <iostream>
# include "Contact.class.hpp"

class PhoneBook {

	private:
		Contact	contact[8];

	public:
		void	addContact(void);	
};

#endif