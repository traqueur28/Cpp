/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:47:19 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 17:09:10 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class   Animal
{
    public:
        //Conctructor
        Animal();
        Animal(const Animal &cpy);

        //Destructor
        virtual ~Animal();

        //Function
        virtual void    makeSound() const;
        std::string getType() const;
        
        //Operator
        Animal  &operator=(const Animal &cpy);

    protected:
        //Attribut
        std::string _type;
};

#endif