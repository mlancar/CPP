/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:16:17 by malancar          #+#    #+#             */
/*   Updated: 2024/07/03 19:00:33 by malancar         ###   ########.fr       */
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
		std::vector<std::string>	_rpn;
};

#endif