/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:16:17 by malancar          #+#    #+#             */
/*   Updated: 2024/07/04 15:01:29 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
#include <list>

class RPN
{
	public:
		RPN();
		RPN(RPN const& copy);
		~RPN();
		
		RPN &operator=(RPN const& rhs);
		void	parseInput(char *arg);
		void	casio90plusE();
		
	private:
		std::list<std::string>	_rpn;
};

#endif