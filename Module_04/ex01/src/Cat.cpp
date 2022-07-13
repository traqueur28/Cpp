/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:49:27 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 11:42:36 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Cat.hpp"

//COnstructor

Cat::Cat(): Animal()
{
    this->_Brain = new Brain();
    this->_type = "Cat";
    std::cout << "\033[036m[Cat] Default Constructor\033[0m" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
    this->_Brain = new Brain(*cpy._Brain);
    std::cout << "\033[036m[Cat] Copy Constructor\033[0m" << std::endl;
}

//Destructor

Cat::~Cat()
{
    delete this->_Brain;
    std::cout << "\033[036m[Cat] Destructor\033[0m" << std::endl;
}

//Operator

Cat &Cat::operator=(const Cat &cpy)
{
    this->_type = cpy.getType();
    if (this->_Brain)
        delete this->_Brain;
    this->_Brain = new Brain(*cpy._Brain);
    return(*this);
}

//Function

void    Cat::makeSound() const{
    std::cout << "Bark" << std::endl;
}

void    Cat::set_ideas(std::string str){
    this->_Brain->set_ideas(str);
}

void    Cat::print_idea()
{
    std::cout << "idea: " << this->_Brain[0].get_idea() << std::endl;
}