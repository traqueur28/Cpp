/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 06:59:59 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/08 08:19:41 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Brain.hpp"

//Constructor

Brain::Brain(){
    std::cout << "\033[95m[Brain] Default Constructor\033[0m" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    std::cout << "\033[95m[Brain] Copy Constructor\033[0m" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = cpy._ideas[i];
}

//Destructor

Brain::~Brain(){
    std::cout << "\033[95m[Brain] Destructor\033[0m" << std::endl;
}

//Operator

Brain &Brain::operator=(const Brain &cpy)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = cpy._ideas[i];
    return (*this);
}

//Functiom

void    Brain::set_ideas(std::string str){
    this->_ideas[0] = str;
}

std::string Brain::get_idea(){
    return (this->_ideas[0]);
}

