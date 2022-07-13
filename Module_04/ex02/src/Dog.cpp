/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:49:27 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 11:44:44 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Dog.hpp"

//COnstructor

Dog::Dog(): AAnimal()
{
    this->_Brain = new Brain();
    this->_type = "Dog";
    std::cout << "\033[036m[Dog] Default Constructor\033[0m" << std::endl;
}

Dog::Dog(const Dog &cpy): AAnimal(cpy)
{
    this->_Brain = new Brain(*cpy._Brain);
    std::cout << "\033[036m[Dog] Copy Constructor\033[0m" << std::endl;
}

//Destructor

Dog::~Dog()
{
    delete this->_Brain;
    std::cout << "\033[036m[Dog] Destructor\033[0m" << std::endl;
}

//Operator

Dog &Dog::operator=(const Dog &cpy)
{
    this->_type = cpy.getType();
    if (this->_Brain)
        delete this->_Brain;
    this->_Brain = new Brain(*cpy._Brain);
    return(*this);
}

//Function

void    Dog::makeSound() const{
    std::cout << "Bark" << std::endl;
}

void    Dog::set_ideas(std::string str){
    this->_Brain->set_ideas(str);
}

void    Dog::print_idea()
{
    std::cout << "idea: " << this->_Brain[0].get_idea() << std::endl;
}