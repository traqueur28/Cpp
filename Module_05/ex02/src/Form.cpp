/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:40:59 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/12 15:17:37 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Form.hpp"

Form::Form(std::string name, int sign, int exec): _name(name), _g_exec(exec), _g_sig(sign), _signed(false){
    if (_g_sig < 1 || _g_exec < 1)
		throw GradeTooHighException();
	if (_g_sig > 150 || _g_exec > 150)
		throw GradeTooLowException();
    std::cout << "[Form] Conctructor called " << *this << std::endl;
}

Form::Form(const Form &cpy): _name(cpy._name), _g_exec(cpy._g_exec), _g_sig(cpy._g_sig), _signed(cpy._signed){
    std::cout << "[Form] Copy called " << *this << std::endl;
}

Form::~Form(){
    std::cout << "[Form] Destructor called " << std::endl;
}

//Throw

const char	*Form::GradeTooHighException::what()const throw(){
	return ("Grade too high");
}

const char	*Form::GradeTooLowException::what()const throw(){
	return ("Grade too low");
}

const char  *Form::NotSignedException::what()const throw(){
    return ("Form not signed");
}

const char  *Form::GradeTooLowExecException::what()const throw(){
    return ("Grade too low for exec")
}

//Function
    //Accessor
std::string Form::get_name() const{
    return (this->_name);
}

int Form::get_g_exec() const{
    return (this->_g_exec);
}

int Form::get_g_sig() const{
    return (this->_g_sig);
}

bool    Form::get_signed() const{
    return (this->_signed);
}


    //other
void    Form::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() > this->get_g_sig())
        throw GradeTooLowException();
    this->_signed = true;
}

//Operator

Form    &Form::operator=(const Form &cpy)
{
    this->_signed = cpy.get_signed();
    std::cout << "[Form] Assignement called " << *this << std::endl;
	return (*this);
}


std::ostream	&operator << (std::ostream &out, const Form &src){
	return (out << src.get_name() 
    << ", Form is signed: " << src.get_signed() 
    << ", Form level to signed: " << src.get_g_sig() 
    << ", Form level to execute: " << src.get_g_exec());

}