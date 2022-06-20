/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:25:48 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 15:49:25 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Zombie.hpp"

int Zombie::nbzombie = 0;

Zombie::Zombie(std::string name):_name(name)
{
    Zombie::nbzombie++;
    announce();
}

Zombie::Zombie(void)
{
    Zombie::nbzombie++;
}

Zombie::~Zombie(void)
{
    Zombie::nbzombie--;
    std::cout << this->_name << " is really die" <<std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::yourname(std::string name)
{
    this->_name = name;
}