/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:16:23 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 16:24:38 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Brain's address is                   " << &brain << std::endl;
    std::cout << "The memory address held by stringPTR " << stringPTR << std::endl;
    std::cout << "The memory address held by stringPTR " << &stringREF << std::endl << std::endl;

    std::cout << "Brain's value is                  " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF " << stringREF << std::endl;
    
    return (0);
}