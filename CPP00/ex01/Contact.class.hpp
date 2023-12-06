/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:06:52 by malancar          #+#    #+#             */
/*   Updated: 2023/12/06 16:17:29 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

class Contact {
	
	private:
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string	darkest_secret;
		std::string	phone_number;

	public:
		void	setFirstName(std::string str){
			first_name = str;
		}
		void	printFirstName(void);
			
			
};

#endif