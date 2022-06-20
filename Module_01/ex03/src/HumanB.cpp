/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:27:57 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 17:50:37 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/HumanB.hpp"

HumanB::HumanB(std::string str): _name(str)
{
    
}

HumanB::~HumanB()
{
    
}

void	HumanB::attack()
{
    std::cout << this->_name;
    std::cout << " attacks with their ";
    std::cout << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &name)
{
    this->_weapon = &name;
}