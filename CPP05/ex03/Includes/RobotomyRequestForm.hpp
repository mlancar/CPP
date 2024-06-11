/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:33:22 by malancar          #+#    #+#             */
/*   Updated: 2024/06/11 19:18:10 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public Form {
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const& copy);
		~RobotomyRequestForm();
		
		class robotomyFailed : public std::exception
		{
			public:
				const char* what() const throw();
		};
		void	execute(Bureaucrat const& executor) const;
};

#endif