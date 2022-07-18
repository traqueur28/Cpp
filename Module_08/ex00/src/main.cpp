/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:10:26 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/18 09:57:30 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/easyfind.hpp"
#include <iostream>
# include <iomanip>
# include <algorithm>
# include <vector>

int	main()
{
	std::cout << "--- MAIN ---" << std::endl << std::endl;
	{
		std::cout << "--- INT ---" << std::endl << std::endl;
		std::vector<int> tab(6);
		tab[0] = 0;
		tab[1] = 42;
		tab[2] = 28;
		tab[3] = 88;
		tab[4] = -42;
		tab[5] = 45;
		print(tab, tab.size());
		std::cout << "42 is here ? ";
		easyfind(tab, 42);
		std::cout << std::endl;
		std::cout << "41 is here ? ";
		easyfind(tab, 41);
		std::cout << std::endl;
		std::cout << "0 is here ? ";
		easyfind(tab, 0);
		std::cout << std::endl;
		std::cout << "-42 is here ? ";
		easyfind(tab, -42);
		std::cout << std::endl;
	}
	{
		std::cout << "--- CHAR ---" << std::endl << std::endl;
		std::vector<char> tab(6);
		tab[0] = 0;
		tab[1] = 42;
		tab[2] = 28;
		tab[3] = 88;
		tab[4] = -42;
		tab[5] = 45;
		print(tab, tab.size());
		std::cout << "42 is here ? ";
		easyfind(tab, 42);
		std::cout << std::endl;
		std::cout << "41 is here ? ";
		easyfind(tab, 41);
		std::cout << std::endl;
		std::cout << "0 is here ? ";
		easyfind(tab, 0);
		std::cout << std::endl;
		std::cout << "-42 is here ? ";
		easyfind(tab, -42);
		std::cout << std::endl;
	}
	std::cout << "--- END MAIN ---" << std::endl << std::endl;

}