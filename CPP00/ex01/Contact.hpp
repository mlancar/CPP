/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:06:52 by malancar          #+#    #+#             */
/*   Updated: 2023/12/11 16:46:03 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
	
	public:
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickname(std::string nickname);
		void		setDarkestSecret(std::string darkestSecret);
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getFirstName() const;
	
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string _nickname;
		std::string	_darkestSecret;
		std::string	_phoneNumber;		
			
};

#endif