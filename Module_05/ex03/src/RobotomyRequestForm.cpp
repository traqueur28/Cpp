/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:36:46 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 09:47:07 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/RobotomyRequestForm.hpp"

//Constructor

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy", 72, 45), _target(target){
    std::cout << "[Robotomy] Conctructor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): Form(cpy),
_target(cpy._target){
    std::cout << "[Robotomy] Conctructor called " << std::endl;
}

//Destructor

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "[Robotomy] Destructor called " << std::endl;
}

//Function

std::string RobotomyRequestForm::get_target() const{
    return (this->_target);
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    (void) executor;
    std::srand(time(NULL));
    int i = std::rand() % 2;

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