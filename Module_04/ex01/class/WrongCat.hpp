/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:12:12 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:13:04 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class   WrongCat: public WrongAnimal
{
    public:
        //Constructor
        WrongCat();
        WrongCat(const WrongCat &cpy);
        
        //Destructor
        ~WrongCat();

        //Operator
        WrongCat &operator=(const WrongCat &cpy);

        //Function
        void    makeSound() const;
};

#endif