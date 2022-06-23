/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:55:50 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 10:18:00 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Harl.hpp"

int main(int argc, char **argv)
{
    Harl    bot;

    if (argc != 2)
        std::cout << "Error nb Argument" << std::endl;
    else
        bot.complain(argv[1]);
    return (0);
}