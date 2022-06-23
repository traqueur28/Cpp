/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:17:54 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 09:47:31 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Harl.hpp"

int main(int argc, char **argv)
{
    Harl    bot;

    if (argc != 2)
        return (0);
    bot.complain(argv[1]);
    return (0);
}