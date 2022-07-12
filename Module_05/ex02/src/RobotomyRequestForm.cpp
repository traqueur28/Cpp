/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:36:46 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/12 17:52:50 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/RobotomyRequestForm.hpp"

//Constructor

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Presidential", 72, 45), _target(target){
    std::cout << "[President] Conctructor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): Form(cpy),
_target(cpy._target){
    std::cout << "[President] Conctructor called " << std::endl;
}

//Destructor

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "[President] Destructor called " << std::endl;
}

//Function

std::string RobotomyRequestForm::get_target() const{
    return (this->_target);
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor){
    srand (time(NULL));
    int i = rand() % 1;

    std::cout << "BZZZZZZZZZZZZZZzzzzzz..." << std::endl;
    if (i)
        std::cout << this->get_target() << " has been robotomized" << std::endl;
    else
        std::cout << "Robotomy failed..." << std::endl;
}

//Operator

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
    Form::operator=(cpy);
    this->_target = cpy._target;
    return (*this);
}

std::ostream    &operator<<(std::ostream &out, const RobotomyRequestForm &src)
{
    return (out << src.get_name() 
    << ", Form is signed: " << src.get_signed() 
    << ", Form level to signed: " << src.get_g_sig() 
    << ", Form level to execute: " << src.get_g_exec()
    << ", target: " << src.get_target());
}