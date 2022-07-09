/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:16:39 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/09 12:43:02 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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


	private:
		Bureaucrat();
		std::string	_name;
		int	_grade;
};

std::ostream & operator << (std::ostream &out, const Bureaucrat &src);

#endif