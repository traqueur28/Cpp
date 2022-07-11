/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:16:26 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/11 16:00:27 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Bureaucrat.hpp"
#include "../class/Form.hpp"

Bureaucrat::Bureaucrat(){

}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "[Bureaucrat] Conctructor called " << this->_name << ":" << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): _name(cpy._name), _grade(cpy._grade){
	std::cout << "[Bureaucrat] Copy Conctructor called " << this->_name << ":" << this->_grade << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "[Bureaucrat] Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy)
{
	this->_grade = cpy.getGrade();
	std::cout << "[Bureaucrat] Assignement called " << this->_name << ":" << this->_grade << std::endl;
	return (*this);
}

//Function

std::string	Bureaucrat::getName()const{
	return (this->_name);
}

int	Bureaucrat::getGrade()const{
	return (this->_grade);
}

void	Bureaucrat::promote(){
	std::cout << this->getName() << " is promoted" << std::endl;
	if (this->getGrade() <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::retrograde(){
	std::cout << this->getName() << " is retrograded" << std::endl;
	if (this->getGrade() >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.get_name() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.get_name() << " because ";
		std::cout << e.what() << std::endl;
	}
}

//Throw

const char	*Bureaucrat::GradeTooHighException::what()const throw(){
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what()const throw(){
	return ("Grade too low");
}

std::ostream	&operator << (std::ostream &out, const Bureaucrat &src) {
	return (out << src.getName() << ", bureaucrat grade " << src.getGrade());
}