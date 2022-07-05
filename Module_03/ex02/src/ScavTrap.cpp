/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:16:38 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/05 08:36:21 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/ScavTrap.hpp"

//Constructor

ScavTrap::ScavTrap(): ClapTrap("name")
{
    std::cout << "\033[32m[ScavTrap] Default Constructor\033[0m" << std::endl;
    this->_pdv = 100;
	this->_pe = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "\033[32m[ScavTrap] Named Constructor \033[0m" << std::endl;
    this->_pdv = 100;
	this->_pe = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(ScavTrap const &cpy): ClapTrap(cpy)
{
    std::cout << "\033[32m[ScavTrap] Copy Constructor\033[0m" << std::endl;

}

//Destructor

ScavTrap::~ScavTrap()
{
    std::cout << "\033[31m[ScavTrap] Destructor\033[0m" << std::endl;
}

//Operator

ScavTrap    &ScavTrap::operator=(ScavTrap const &cpy)
{
    this->_name = cpy.Get_name();
    this->_pdv = cpy.Get_pdv();
    this->_pe = cpy.Get_pe();
    this->_ad = cpy.Get_ad();
    return (*this);
}

//Function

void    ScavTrap::attack(const std::string &target)
{
    if (0 == this->Get_pe() || 0 == this->Get_pdv())
    {
        std::cout << "Not enough pdv or pe" << std::endl;
    }
    else
    {
        std::cout << "[ScavTrap] " << this->Get_name();
        std::cout << " attacks " << target;
        std::cout << " causing " << this->Get_ad() << " points of damage!" << std::endl;
        this->_pe --;
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "\033[31m[ScavTrap] " << this->Get_name() << " is now in Guard mode \033[0m" << std::endl;
}