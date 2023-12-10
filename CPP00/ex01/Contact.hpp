/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:06:52 by malancar          #+#    #+#             */
/*   Updated: 2023/12/10 18:22:25 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
	
	public:
		void		setFirstName(std::string str);
		std::string	getFirstName() const;
		void		addFirstName();
		void		printFirstName(void);
	
	private:
		std::string	_firstName;
		std::string	last_name;
		std::string nickname;
		std::string	darkest_secret;
		std::string	phone_number;

			
			
};

#endif