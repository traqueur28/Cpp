/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:55:55 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 10:20:15 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void    Harl::complain(std::string level)
{
    int i = 0;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    while (i < 4 && level != str[i])
        i++;
    switch (i)
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
        {
            this->error();
            break;
        }
    
        default:
        {
            std::cout << "--- DEFAULT ---" << std::endl;
            std::cout<< "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
}

void    Harl::debug()
{
    std::cout << "--- DEBUG ---" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "--- INFO ---" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "--- WARNING ---" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "--- ERROR ---" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}