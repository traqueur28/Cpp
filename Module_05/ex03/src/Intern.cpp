/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:03:36 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 11:02:18 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Intern.hpp"

//Constructor

Intern::Intern(){
    std::cout << "[Intern] Conctructor called" << std::endl;
}


Intern::Intern(const Intern &cpy)
{
    (void)cpy;
    std::cout << "[Intern] Copy Conctructor called" << std::endl;
}

//Destructor

Intern::~Intern(){
    std::cout << "[Intern] Destructor called" << std::endl;
}


//Function

Form    *Intern::_tree(std::string target){
    return (new ShrubberyCreationForm(target));
}
Form    *Intern::_Robotomy(std::string target){
    return (new RobotomyRequestForm(target));
}
Form    *Intern::_Presidential(std::string target){
    return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(const std::string& form, const std::string& target) {
    std::string key[3] = {"shrubbery creation", "robotomy request","presidential pardon"};

    Form *(Intern::*function[3])(std::string target) = {&Intern::_tree, &Intern::_Robotomy, &Intern::_Presidential};

    for (int i = 0; i < 3; i++)
    {
        if (!key[i].compare(form))
        {
            std::cout << "Intern create " << form << std::endl;
            return ((this->*function[i])(target));
        }
    }
    std::cout << "form not found: " << form << std::endl;
	return (NULL);
}

//Operator

Intern& Intern::operator=(const Intern &cpy)
{
    (void)cpy;
    std::cout << "[Intern] Assignement called" << std::endl;
    return (*this);
}