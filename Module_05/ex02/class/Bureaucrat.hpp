/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:16:39 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/12 17:53:01 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &cpy);

		//Function
		std::string	getName() const;
		int	getGrade() const;
		void	promote();
		void	retrograde();
		void	signForm(Form &form);
		void	executeForm(const Form &form);

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


	protected:
		const std::string	_name;
		int	_grade;
	
	private:
		Bureaucrat();
};

std::ostream	&operator << (std::ostream &out, const Bureaucrat &src);

#endif