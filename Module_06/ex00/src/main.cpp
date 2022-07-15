/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:44:05 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/15 10:06:47 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Conversion.hpp"

int error_argument()
{
    std::cout << "Unvalid argument: ./executable <argument>" << std::endl;
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Conversion  a(argv[1]);
        a.Display();
    }
    else
        return (error_argument());
    return (0);
}