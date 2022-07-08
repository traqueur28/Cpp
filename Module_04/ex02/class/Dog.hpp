/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:48:01 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/08 08:39:06 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class   Dog : public AAnimal
{
    public:
        //Constructor
        Dog();
        Dog(const Dog &cpy);

        //Destructor
        ~Dog();

        //Operator
        Dog &operator=(const Dog &cpy);

        //Function
        virtual void    makeSound() const;
        void    set_ideas(std::string str);
        void    print_idea();

    private:
        Brain   *_Brain;
};


#endif