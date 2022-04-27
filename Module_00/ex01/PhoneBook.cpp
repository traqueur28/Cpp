#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "construction du PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "destuction du PhoneBook" << std::endl;
}