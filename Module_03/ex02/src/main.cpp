/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:44:40 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/05 09:08:46 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/ClapTrap.hpp"
#include "../class/ScavTrap.hpp"
#include "../class/FragTrap.hpp"

int main()
{
    FragTrap    alpha("alpha");
    FragTrap    bravo(alpha);
    FragTrap    charlie("charlie");

    std::cout << std::endl << std::endl;
    alpha.display_info();
    bravo.display_info();
    charlie.display_info();

    bravo = charlie;
    std::cout << "bravo = charlie" << std::endl << std::endl;
    alpha.display_info();
    bravo.display_info();
    charlie.display_info();

    std::cout << std::endl << std::endl;

    alpha.attack("butterflie");
    bravo.attack("kitty");
    charlie.attack("lion");

    std::cout << std::endl << std::endl;

    alpha.display_info();
    bravo.display_info();
    charlie.display_info();

    std::cout << std::endl << std::endl;

    alpha.takeDamage(0);
    bravo.takeDamage(2);
    charlie.takeDamage(500000);

    std::cout << std::endl << std::endl;

    alpha.display_info();
    bravo.display_info();
    charlie.display_info();

    std::cout << std::endl << std::endl;

    alpha.beRepaired(4294967282);
    bravo.beRepaired(2);
    charlie.beRepaired(1);

    std::cout << std::endl << std::endl;

    alpha.display_info();
    bravo.display_info();
    charlie.display_info();

    std::cout << std::endl << std::endl;

    alpha.attack("nothing");
    bravo.attack("nothing");
    charlie.attack("nothing");

    alpha.highFivesGuys();
    bravo.highFivesGuys();
    charlie.highFivesGuys();

    for(int i = 0; i < 52; i++)
        alpha.attack("exhaust");

}

