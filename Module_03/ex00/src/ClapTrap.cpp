/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:44:37 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/27 14:01:57 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/ClapTrap.hpp"

//Constructor

ClapTrap::ClapTrap(): _name("name"), _pdv(10), _pe(10), _ad(0){
    std::cout << "void Constructor called ClapTrap" << std::endl;
    this->display_info();
}

ClapTrap::ClapTrap(ClapTrap const &cpy): _name(cpy._name), _pdv(cpy._pdv), _pe(cpy._pe), _ad(cpy._ad){
    std::cout << "Copy Constructor called ClapTrap" << std::endl;
    this->display_info();
}

ClapTrap::ClapTrap(std::string name): _name(name), _pdv(10), _pe(10), _ad(0){
    std::cout << "Constructor called ClapTrap" << std::endl;
    this->display_info();
}

//Destructor

ClapTrap::~ClapTrap(){
    std::cout << "Destructor called" << std::endl;
}

//Ope

ClapTrap    &ClapTrap::operator=(ClapTrap const &cpy)
{
    this->_name = cpy.Get_name();
    this->_pdv = cpy.Get_pdv();
    this->_pe = cpy.Get_pe();
    this->_ad = cpy.Get_ad();
    return (*this);
}

//Function

void    ClapTrap::attack(const std::string &target)
{
    if (0 == this->Get_pe() || 0 == this->Get_pdv())
    {
        std::cout << "Not enough pdv or pe" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->Get_name();
        std::cout << " attacks " << target;
        std::cout << " causing " << this->Get_ad() << " points of damage!" << std::endl;
        this->_pe --;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (0 == this->Get_pdv())
    {
        std::cout << "He is already death" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->Get_name();
        std::cout << " take " << amount << " of damage... ";
        if (amount >= this->Get_pdv())
            this->_pdv = 0;
        else
            this->_pdv -= amount;
        std::cout << this->Get_pdv() << " remain pdv" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (0 == this->Get_pe() || 0 == this->Get_pdv())
    {
        std::cout << "Not enough pdv or pe" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->Get_name();
        std::cout << " regenerate " << amount << " of pdv ...";
        if (this->_pdv + amount < amount)
            this->_pdv = 4294967295;
        else
            this->_pdv += amount;
        this->_pe--;
        std::cout << this->Get_pdv() << " remain pdv" << std::endl;
    }
}

unsigned int    ClapTrap::Get_pdv()const{
    return (this->_pdv);
}

unsigned int    ClapTrap::Get_pe()const{
    return (this->_pe);
}

unsigned int    ClapTrap::Get_ad()const{
    return (this->_ad);
}

std::string     ClapTrap::Get_name()const{
    return (this->_name);
}

void    ClapTrap::display_info()
{
    std::cout << "name: " << this->Get_name() << std::endl;
    std::cout << "pdv : " << Get_pdv() << std::endl;
    std::cout << "ad  : " << Get_ad() << std::endl;
    std::cout << "pe  : " << Get_pe() << std::endl;
}