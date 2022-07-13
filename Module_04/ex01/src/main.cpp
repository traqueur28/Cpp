/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:47:34 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/13 11:38:44 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Animal.hpp"
#include "../class/Dog.hpp"
#include "../class/Cat.hpp"
#include "../class/WrongAnimal.hpp"
#include "../class/WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    std::cout << "--- END SUBJECT MAIN ---" << std::endl << std::endl;
    std::cout << "--- START ANIMAL TABLE ---" << std::endl << std::endl;
    Animal  *tab[6];

    for (int i = 0; i < 6; i++)
    {
        if (i % 2)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
        std::cout << std::endl;
    }

    for (int i = 0; i < 6; i++)
    {
        delete (tab[i]);
        std::cout << std::endl;
    }

    std::cout << "--- END ANIMAL TABLE ---" << std::endl << std::endl;
    std::cout << "--- START BRAIN TEST ---" << std::endl << std::endl;

    Cat  cat1;
    Cat  cat2;
    Cat  cat3;

    cat1.set_ideas("eat");
    cat2.set_ideas("sleep");
    cat3.set_ideas("play");

    cat1.print_idea();
    cat2.print_idea();
    cat3.print_idea();

    cat3 = cat2;
    Cat cat4(cat2);

    cat1.print_idea();
    cat2.print_idea();
    cat3.print_idea();
    cat4.print_idea();

    std::cout << "--- DOGGY ---" << std::endl << std::endl;

    Dog  Dog1;
    Dog  Dog2;
    Dog  Dog3;

    Dog1.set_ideas("Bark");
    Dog2.set_ideas("Run");
    Dog3.set_ideas("play");

    Dog1.print_idea();
    Dog2.print_idea();
    Dog3.print_idea();

    Dog3 = Dog2;
    Dog Dog4(Dog2);

    Dog1.print_idea();
    Dog2.print_idea();
    Dog3.print_idea();
    Dog4.print_idea();

    return 0;
}