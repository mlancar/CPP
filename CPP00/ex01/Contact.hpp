/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:06:52 by malancar          #+#    #+#             */
/*   Updated: 2023/12/31 20:51:45 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
	
	public:

		Contact();
		~Contact();

		static int	isPhoneNumberValid(std::string phoneNumber);
		static int	isInfoValid(std::string info, std::string errorMessage);
		
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickname(std::string nickname);
		void		setDarkestSecret(std::string darkestSecret);
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getDarkestSecret() const;
		std::string	getPhoneNumber() const;
	
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string _nickname;
		std::string	_darkestSecret;
		std::string	_phoneNumber;		
			
};

#endif