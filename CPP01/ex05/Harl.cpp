/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:45:04 by malancar          #+#    #+#             */
/*   Updated: 2024/01/18 15:14:15 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void    Harl::debug()
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money.";
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}

void    Harl::warning()
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
	void		(Harl::*harl[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	input[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    
    while(i < 4)
    {
        if (level == input[i])
        {
            (this->*harl[i])();
            return;
        }
        i++;
    }
    std::cout << "Enter : DEBUG. INFO, WARNING or ERROR" << std::endl;
    
}
