/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:07 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 08:25:53 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Contact.hpp"

Contact::Contact(void)
{
	//std::cout << "construction du Contact" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "destruction du Contact" << std::endl;
}

void	Contact::contact_add(void)
{
	std::cout << "What is your first name?" << std::endl;
	std::cin >> this->_firstname;
	std::cout << "What is your last name?" << std::endl;
	std::cin >> this->_lastname;
	std::cout << "What is your nickname?" << std::endl;
	std::cin >> this->_nickname;
	std::cout << "What is your phone number?" << std::endl;
	std::cin >> this->_phonenumber;
	std::cout << "What is your darkest secret?" << std::endl;
	std::cin >> this->_secret;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	Contact::contact_info(void)
{
	std::cout << "first name :" << this->_firstname << std::endl;
	std::cout << "last name  :" << this->_lastname << std::endl;
	std::cout << "nickname   :" << this->_nickname << std::endl;
	std::cout << "Phonenumber:" << this->_phonenumber << std::endl;
	std::cout << "Secret     :" << this->_secret << std::endl;

}

void	Contact::_print_string(std::string str)
{
	size_t	size;

	size = str.size();
	if (size > 9)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		std::cout << std::setw(10) << str;
	}
}

void	Contact::print_name(void)
{
	this->_print_string(this->_firstname);
	std::cout << "|";
	this->_print_string(this->_lastname);
	std::cout << "|";
	this->_print_string(this->_nickname);
	std::cout << "|" << std::endl;
}