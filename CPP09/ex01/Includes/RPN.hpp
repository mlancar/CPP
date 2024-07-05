/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:16:17 by malancar          #+#    #+#             */
/*   Updated: 2024/07/05 19:18:06 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstring>
#include <stack>

class RPN
{
	public:
		RPN();
		RPN(RPN const& copy);
		~RPN();
		
		RPN &operator=(RPN const& rhs);
		void	casio90plusE(char *arg);
		void	addition();
		void	substraction();
		void	multiplication();
		void	division();
		
	private:
		std::stack<int>	_rpn;
		int	_sumValue;
		
};

#endif