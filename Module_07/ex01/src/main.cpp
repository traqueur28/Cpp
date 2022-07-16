/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:07:22 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/16 10:25:48 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/iter.hpp"

int main()
{
    {
        std::cout << "--- INT ---" << std::endl << std::endl;
        int a[7] = {42, 21, 0, 42, 99, -42, 28};

        iter<int>(a, 7, print);
        std::cout << std::endl;
        iter<int>(a, 7, increment);
        iter<int>(a, 7, print);
        std::cout << std::endl;
    }
    {
        std::cout << "--- CHAR ---" << std::endl << std::endl;
        char    a[18] = "abcdefABCDEF01234";

        iter<char>(a, 18, print);
        std::cout << std::endl;
        iter<char>(a, 18, increment);
        iter<char>(a, 18, print);
        std::cout << std::endl;
    }
    {
        std::cout << "--- FLOAT ---" << std::endl << std::endl;
        float a[7] = {42.42, 21, 0, 42, 99.99, -42, 28};

        iter<float>(a, 7, print);
        std::cout << std::endl;
        iter<float>(a, 7, increment);
        iter<float>(a, 7, print);
        std::cout << std::endl;
    }
    return (0);
}