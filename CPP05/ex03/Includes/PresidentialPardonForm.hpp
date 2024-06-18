/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:25:14 by malancar          #+#    #+#             */
/*   Updated: 2024/06/18 19:00:21 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDNFORM_HPP
#define PRESIDENTIALPARDNFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const& rhs);
		
		void	execute(Bureaucrat const& executor) const;
		
	private:
		std::string _target;
};

#endif