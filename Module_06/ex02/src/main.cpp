/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:52:50 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/15 11:26:32 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Base.hpp"

Base	*generate(void)
{
	srand(time(NULL));
	int	i = rand() % 3;

	switch (i)
	{
		case 0:
			std::cout << "Class A" << std::endl;
			return (new A);

		case 1:
			std::cout << "Class B" << std::endl;
			return (new B);

		case 2:
			std::cout << "Class C" << std::endl;
			return (new C);
	
		default:
			return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "True type of p is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "True type of p is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "True type of p is C" << std::endl;
	else
		std::cout << "Unknow class" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	tmp = dynamic_cast<A&>(p);
		std::cout << "True type of p is A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B	tmp = dynamic_cast<B&>(p);
			std::cout << "True type of p is B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C	tmp = dynamic_cast<C&>(p);
				std::cout << "True type of p is C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
	
}

int	main()
{
	Base	*p = NULL;

	std::cout << "--- GENERATE ---" << std::endl;
	p = generate();

	std::cout << "--- PTR ---" << std::endl;

	identify(p);

	std::cout << "--- REF ---" << std::endl;
	if (p)
		identify(*p);

	std::cout << "--- DELETE ---" << std::endl;

	if (p)
		delete (p);

	std::cout << "--- END MAIN ---" << std::endl;
	return (0);
}