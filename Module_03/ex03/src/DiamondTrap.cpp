/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 09:20:54 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/05 10:44:48 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/DiamondTrap.hpp"

//Constructor

DiamondTrap::DiamondTrap(): ClapTrap("name_clap_name"), ScavTrap("name_clap_name"), FragTrap("name_clap_name"),
_name("name")
{
    this->_pdv = FragTrap::_pdv;
    this->_pe = ScavTrap::_pe;
    this->_ad = FragTrap::_ad;
        std::cout << "\033[36m[DiamondTrap] Default Constructor\033[0m" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"),
_name(name)
{
    this->_pdv = FragTrap::_pdv;
    this->_pe = ScavTrap::_pe;
    this->_ad = FragTrap::_ad;
        std::cout << "\033[36m[DiamondTrap] Named Constructor\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy): ClapTrap(cpy), ScavTrap(cpy),
FragTrap(cpy), _name(cpy._name)
{
    std::cout << "\033[36m[DiamondTrap] Copy Constructor\033[0m" << std::endl;
}

//Destructor

DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[31m[DiamondTrap] Destructor\033[0m" << std::endl;

}

//Operator

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &cpy)
{
    this->_name = cpy._name;
    this->_pdv = cpy.Get_pdv();
    this->_pe = cpy.Get_pe();
    this->_ad = cpy.Get_ad();
    return (*this);
}

//Function

void    DiamondTrap::whoAmI()
{
    std::cout << "i'm " << this->_name << " and i'm " << ScavTrap::_name << " too !" << std::endl;
}

void    DiamondTrap::display_info()
{
    std::cout << "name: " << this->_name << std::endl;
    std::cout << "clap: " << ClapTrap::_name << std::endl;
    std::cout << "pdv : " << Get_pdv() << std::endl;
    std::cout << "ad  : " << Get_ad() << std::endl;
    std::cout << "pe  : " << Get_pe() << std::endl;
}