/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:48:03 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/08 08:19:45 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class   Cat: public Animal
{
    public:
        //Constructor
        Cat();
        Cat(const Cat &cpy);
        
        //Destructor
        ~Cat();

        //Operator
        Cat &operator=(const Cat &cpy);

        //Function
        virtual void    makeSound() const;
        void    set_ideas(std::string str);
        void    print_idea();

    private:
        Brain   *_Brain;
};

#endif