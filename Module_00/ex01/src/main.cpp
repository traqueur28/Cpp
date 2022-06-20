#include "../class/Contact.hpp"
#include "../class/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	alpha;
	std::string	inpt;
	int			count = 0;

	while (1)
	{
		if (count > 7)
			count = 0;
		std::cout << "ADD or SEARCH or EXIT" << std::endl;
		std::getline(std::cin, inpt);
		if (inpt == "EXIT")
			return (0);
		else if (inpt == "ADD")
		{
			alpha.phonebook_add(count);
			count++;
		}
		else if (inpt == "SEARCH")
			alpha.phonebook_search();	
	}
	return (0);
}