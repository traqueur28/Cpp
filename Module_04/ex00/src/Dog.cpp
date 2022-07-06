/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:49:27 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:04:36 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Dog.hpp"

Dog::Dog(): Animal()
{
    _type = "Dog";
    std::cout << "\033[036m[Dog] Default Constructor\033[0" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy){
    std::cout << "\033[036m[Dog] Copy Constructor\033[0" << std::endl;
}

Dog::~Dog()
{
    std::cout << "\033[036m[Dog] Destructor\033[0" << std::endl;
}

Dog &Dog::operator=(const Dog &cpy)
{
    this->_type = cpy.getType();
    return(*this);
}

void    Dog::makeSound() const{
    std::cout << "Bark" << std::endl;
}