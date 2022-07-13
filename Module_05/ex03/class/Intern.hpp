/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:56:08 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 10:36:34 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

class Intern {
    public:
        //Constructor
        Intern();
        Intern(const Intern &cpy);

        //Destructor
        virtual ~Intern();

        //Operator
        Intern& operator=(const Intern &cpy);

        //Function
        Form* makeForm(const std::string &form, const std::string &target);

    private:
        Form	*_tree(std::string target);
		Form	*_Robotomy(std::string target);
		Form	*_Presidential(std::string target);

};

std::ostream    &operator<<(std::ostream &out, const Intern &intern);

#endif