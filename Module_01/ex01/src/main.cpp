/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:05:37 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 15:59:28 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Zombie.hpp"

int main()
{
    std::cout << "--- Beginning of second experiment ---" << std::endl << std::endl;
    std::cout << "--- Creation of original ---" << std::endl;

    Zombie  original("Omega");
    std::cout << "--- Number of zombies: " << Zombie::nbzombie << " ---" << std::endl;
    
    Zombie  *horde = zombieHorde(8, "Primary_horde");
    std::cout << "--- Number of zombies: " << Zombie::nbzombie << " ---" << std::endl;
    std::cout << "--- Removal of evidence ---" << std::endl;
    delete [] horde;
    std::cout << "--- Number of zombies: " << Zombie::nbzombie << " ---" << std::endl;
    std::cout << "--- Removal of Original ---" << std::endl;
    return (0);
}