/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:56:48 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 15:51:43 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];

    std::cout << "--- Creation of " << N << " Zombies ---" << std::endl;
    for (int i = 0; i < N; i++)
    {
        horde[i].yourname(name);
        horde[i].announce();
    }
    return (horde);
}