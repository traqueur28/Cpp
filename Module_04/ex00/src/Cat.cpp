/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:47:47 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:06:01 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Cat.hpp"


//Constructor

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    std::cout << "\033[33m[Cat] Default Constructor\033[0m" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy){
    std::cout << "\033[33m[Cat] Copy Constructor\033[0m" << std::endl;
}

//Destructor

Cat::~Cat(){
    std::cout << "\033[33m[Cat] Constructor\033[0m" << std::endl;
}

//Operator

Cat &Cat::operator=(const Cat &cpy)
{
    this->_type = cpy.getType();
    return (*this);
}

void    Cat::makeSound() const{
    std::cout << "Mew" << std::endl;
}