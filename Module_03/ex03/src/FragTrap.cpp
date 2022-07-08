/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 08:35:09 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/05 09:00:30 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/FragTrap.hpp"

//Constructor

FragTrap::FragTrap(): ClapTrap("name")
{
    std::cout << "\033[33m[FragTrap] Default Constructor\033[0m" << std::endl;
    this->_pdv = 100;
    this->_pe = 100;
    this->_ad = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "\033[33m[FragTrap] Named Constructor \033[0m" << std::endl;
    this->_pdv = 100;
    this->_pe = 100;
    this->_ad = 30;
}

FragTrap::FragTrap(FragTrap const &cpy): ClapTrap(cpy)
{
    std::cout << "\033[33m[FragTrap] Copy Constructor\033[0m" << std::endl;
}

//Destructor

FragTrap::~FragTrap()
{
    std::cout << "\033[31m[FragTrap] Destructor\033[0m" << std::endl;
}

//Operator

FragTrap    &FragTrap::operator=(FragTrap const &cpy)
{
    this->_name = cpy.Get_name();
    this->_pdv = cpy.Get_pdv();
    this->_pe = cpy.Get_pe();
    this->_ad = cpy.Get_ad();
    return (*this);
}

//Function

void    FragTrap::highFivesGuys()
{
    std::cout << "\033[33m[FragTrap] Give me a High 5 !\033[0m" << std::endl;
}