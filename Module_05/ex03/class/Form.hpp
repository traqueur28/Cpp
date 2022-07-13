/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:41:00 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 10:51:33 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    public:
        Form(std::string name, int sign, int exec);
        Form(const Form &cpy);
        virtual ~Form();

        Form    &operator=(const Form &cpy);

        //Throw
        class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
        class GradeTooLowExecException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
        class NotSignedException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

        //Function
            //Accessor
            std::string get_name() const;
            int get_g_exec() const;
            int get_g_sig() const;
            bool    get_signed() const;
        void    beSigned(Bureaucrat &bur);
        virtual void    execute(const Bureaucrat &executor) const = 0;

    private:
        Form();
        const std::string   _name;
        const int   _g_exec;
        const int   _g_sig;
        bool    _signed;

};

std::ostream    &operator << (std::ostream &out, const Form &src);

#endif