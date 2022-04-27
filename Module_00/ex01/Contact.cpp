#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "construction du Contact" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "destuction du Contact" << std::endl;
}