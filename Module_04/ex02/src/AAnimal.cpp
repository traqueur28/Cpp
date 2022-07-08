/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:47:51 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:03:40 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/AAnimal.hpp"

//Constructor

AAnimal::AAnimal(): _type("AAnimal"){
    std::cout << "\033[34m[AAnimal] Default Constructor\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy): _type(cpy._type){
    std::cout << "\033[34m[AAnimal] Copy Constructor\033[0m" << std::endl;
}

AAnimal::~AAnimal(){
    std::cout << "\033[34m[AAnimal] Destructor\033[0m" << std::endl;
}

//Operator

AAnimal  &AAnimal::operator=(const AAnimal &cpy)
{  
    this->_type = cpy.getType();
    return (*this);
}

//Function

void    AAnimal::makeSound() const{
    std::cout << "Strange sound" << std::endl;
}

std::string AAnimal::getType() const{
    return (this->_type);
}