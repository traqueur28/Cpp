/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:15:18 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:22:18 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/WrongAnimal.hpp"

//Constructor

WrongAnimal::WrongAnimal(): _type("WrongAnimal"){
    std::cout << "\033[34m[WrongAnimal] Default Constructor\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy): _type(cpy._type){
    std::cout << "\033[34m[WrongAnimal] Copy Constructor\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "\033[34m[WrongAnimal] Destructor\033[0m" << std::endl;
}

//Operator

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &cpy)
{  
    this->_type = cpy.getType();
    return (*this);
}

//Function

void    WrongAnimal::makeSound() const{
    std::cout << "Wrong Strange sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return (this->_type);
}