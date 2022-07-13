/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:47:34 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 11:45:39 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/AAnimal.hpp"
#include "../class/Dog.hpp"
#include "../class/Cat.hpp"
#include "../class/WrongAnimal.hpp"
#include "../class/WrongCat.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    //const   AAnimal *a = new AAnimal();//Impossible to create

    delete j;//should not create a leak
    delete i;
    //delete a;

    std::cout << "--- END SUBJECT MAIN ---" << std::endl << std::endl;

    return 0;
}