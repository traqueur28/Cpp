/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:33:11 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/12 17:52:52 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/PresidentialPardonForm.hpp"

//Constructor

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential", 25, 5), _target(target){
    std::cout << "[President] Conctructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): Form(cpy),
_target(cpy._target){
    std::cout << "[President] Conctructor called " << std::endl;
}

//Destructor

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "[President] Destructor called " << std::endl;
}

//Function

std::string PresidentialPardonForm::get_target() const{
    return (this->_target);
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor){
    std::cout << this->get_target() << " has been pardoned by Zaphod Beeblebrox !" << std::endl
}

//Operator

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
    Form::operator=(cpy);
    this->_target = cpy._target;
    return (*this);
}

std::ostream    &operator<<(std::ostream &out, const PresidentialPardonForm &src)
{
    return (out << src.get_name() 
    << ", Form is signed: " << src.get_signed() 
    << ", Form level to signed: " << src.get_g_sig() 
    << ", Form level to execute: " << src.get_g_exec()
    << ", target: " << src.get_target());
}