/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:37:40 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/12 17:52:39 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/ShrubberyCreationForm.hpp"

//Constructor

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Presidential", 145, 137), _target(target){
    std::cout << "[President] Conctructor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy): Form(cpy),
_target(cpy._target){
    std::cout << "[President] Conctructor called " << std::endl;
}

//Destructor

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "[President] Destructor called " << std::endl;
}

//Function

std::string ShrubberyCreationForm::get_target() const{
    return (this->_target);
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor){
    std::string FileName;
	FileName = this->_target + "_shruberry";
	std::ofstream	outfile(FileName.c_str());
	
	if (outfile.fail())
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	outfile << "         &&& &&  & &&" << std::endl;
	outfile << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
	outfile << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
	outfile << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
	outfile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
	outfile << "&&   && & &| &| /& & % ()& /&&" << std::endl;
	outfile << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
	outfile << "     &&     \\|||" << std::endl;
	outfile << "             |||" << std::endl;
	outfile << "             |||" << std::endl;
	outfile << "             |||" << std::endl;
	outfile << "       , -=-~  .-^- _" << std::endl;
	outfile.close();

}

//Operator

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
    Form::operator=(cpy);
    this->_target = cpy._target;
    return (*this);
}

std::ostream    &operator<<(std::ostream &out, const ShrubberyCreationForm &src)
{
    return (out << src.get_name() 
    << ", Form is signed: " << src.get_signed() 
    << ", Form level to signed: " << src.get_g_sig() 
    << ", Form level to execute: " << src.get_g_exec()
    << ", target: " << src.get_target());
}