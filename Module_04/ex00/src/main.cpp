/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:47:34 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:24:37 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Animal.hpp"
#include "../class/Dog.hpp"
#include "../class/Cat.hpp"
#include "../class/WrongAnimal.hpp"
#include "../class/WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << " --- My Test --- " << std::endl;

    Dog dog;
    Cat cat;

    Dog d2(dog);
    Cat c2(cat);

    std::cout << " --- Dog --- " << std::endl;

    std::cout << dog.getType() << " " << std::endl;
    std::cout << d2.getType() << " " << std::endl;
    dog.makeSound();
    d2.makeSound();

    std::cout << " --- Cat --- " << std::endl;

    std::cout << cat.getType() << " " << std::endl;
    std::cout << c2.getType() << " " << std::endl;
    cat.makeSound();
    c2.makeSound();

    std::cout << " --- WrongCat WrongAnimal --- " << std::endl;

    const WrongAnimal* Wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongcat = new WrongCat();

    std::cout << Wrongmeta->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;
    
    wrongcat->makeSound(); //will output the cat sound!
    Wrongmeta->makeSound();

    delete Wrongmeta;
    delete wrongcat;

    std::cout << " --- My Wrong Test --- " << std::endl;

    WrongCat wc;
    WrongAnimal wa;

    WrongCat wc2(wc);

    std::cout << wc.getType() << " " << std::endl;
    std::cout << wc2.getType() << " " << std::endl;
    std::cout << wa.getType() << " " << std::endl;
    wc.makeSound();
    wc2.makeSound();
    wa.makeSound();

    return (0);
}