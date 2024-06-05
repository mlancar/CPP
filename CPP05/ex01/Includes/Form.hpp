/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:55:08 by malancar          #+#    #+#             */
/*   Updated: 2024/06/05 18:14:59 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string const name, int const gradeToSign, int const gradeToExecute);
		~Form();
		Form &operator=(Form const& rhs);
		

	private:
		Form();
		std::string const _name;
		bool	_signed;
		int  _gradeToSign;
		int  _gradeToExecute;
};

#endif
