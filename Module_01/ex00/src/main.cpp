/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:29:27 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 14:44:56 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Zombie.hpp"

int	main(void)
{
    std::cout << std::endl << "--- Begin of experiments ---" << std::endl;
	Zombie zombie("Original_Zombie");
    std::cout << std::endl << "--- Creation of minions ---" << std::endl << std::endl;
	
	randomChump("Second_Zombie");
	randomChump("third_Zombie");

    std::cout << std::endl << "--- Creation die ---" << std::endl << std::endl;
	
	Zombie *success = newZombie("Success_creation");

    std::cout << std::endl << "--- Specimen survive success project ---";
    randomChump("last");
    std::cout << std::endl << "--- Removal of evidence ---" << std::endl << std::endl;
	delete success;
	return (0);
}