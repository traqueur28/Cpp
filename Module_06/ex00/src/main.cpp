/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:44:05 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/14 19:39:43 by jgourlin         ###   ########.fr       */
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
        try
        {
            Conversion  a(argv[1]);
            a.Display();
        }
        catch (const std::exception& e){
            std::cout << e.what() << std::endl;
        }
    }
    else
        return (error_argument());
    
    return (0);
}