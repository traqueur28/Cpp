/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:47:51 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:03:40 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Animal.hpp"

//Constructor

Animal::Animal(): _type("Animal"){
    std::cout << "\033[34m[Animal] Default Constructor\033[0m" << std::endl;
}

Animal::Animal(const Animal &cpy): _type(cpy._type){
    std::cout << "\033[34m[Animal] Copy Constructor\033[0m" << std::endl;
}

Animal::~Animal(){
    std::cout << "\033[34m[Animal] Destructor\033[0m" << std::endl;
}

//Operator

Animal  &Animal::operator=(const Animal &cpy)
{  
    this->_type = cpy.getType();
    return (*this);
}

//Function

void    Animal::makeSound() const{
    std::cout << "Strange sound" << std::endl;
}

std::string Animal::getType() const{
    return (this->_type);
}