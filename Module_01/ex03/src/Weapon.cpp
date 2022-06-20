/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:36:51 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 17:36:25 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Weapon.hpp"

Weapon::Weapon()
{
    //std::cout << "Weapon was constructed" << std::endl;
}

Weapon::Weapon(std::string str):type(str)
{
    //std::cout << "Weapon was constructed" << std::endl;
}

Weapon::~Weapon()
{
    //std::cout << "Weapon was destroyed" << std::endl;
}

void    Weapon::setType(std::string str)
{
    this->type = str;
}

const std::string   &Weapon::getType()
{
    return (this->type);
}