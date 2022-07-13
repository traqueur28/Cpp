/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:19:58 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 09:44:45 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &cpy);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy);

        //Function
        virtual void    execute(const Bureaucrat &executor) const;
        std::string get_target() const;
        

    private:
        std::string _target;
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &src);

#endif