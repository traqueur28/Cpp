/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:14:07 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:14:58 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/WrongCat.hpp"


//Constructor

WrongCat::WrongCat(): WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "\033[33m[WrongCat] Default Constructor\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy){
    std::cout << "\033[33m[WrongCat] Copy Constructor\033[0m" << std::endl;
}

//Destructor

WrongCat::~WrongCat(){
    std::cout << "\033[33m[WrongCat] Constructor\033[0m" << std::endl;
}

//Operator

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
    this->_type = cpy.getType();
    return (*this);
}

void    WrongCat::makeSound() const{
    std::cout << "Mew" << std::endl;
}