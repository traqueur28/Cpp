/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:11:40 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 17:51:36 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &str): _name(name), _weapon(str)
{

}

HumanA::~HumanA()
{
    std::cout << this->_name << "is destroyed" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->_name;
    std::cout << " attacks with their ";
    std::cout << this->_weapon.getType() << std::endl;
}