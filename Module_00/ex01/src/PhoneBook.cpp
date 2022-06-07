/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:10 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/07 12:58:17 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include "../class/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
//	std::cout << "Construction du PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
//	std::cout << "Destuction du PhoneBook" << std::endl;
}

void	PhoneBook::phonebook_add(int i)
{
	this->_contact[i].contact_add();
}

void	PhoneBook::phonebook_search(void)
{
	int	temp;

	std::cout << "     Index|";
	std::cout << "First Name|";
	std::cout << " Last Name|";
	std::cout << "  NickName|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		_contact[i].print_name();
	}
	while (1)
	{
		std::cout << "Choose contact with its index" << std::endl;
		std::cin >> temp;
		if (std::cin.eof())
			exit(0);
		else if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (temp >= 0 && temp < 8)
		{
			_contact[temp].contact_info();
			break;
		}

	}
}
