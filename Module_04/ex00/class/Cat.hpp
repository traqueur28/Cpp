/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:48:03 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 17:01:17 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

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
};

#endif