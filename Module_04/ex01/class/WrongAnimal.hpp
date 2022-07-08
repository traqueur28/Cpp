/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:13:16 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 18:13:47 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class   WrongAnimal
{
    public:
        //Conctructor
        WrongAnimal();
        WrongAnimal(const WrongAnimal &cpy);

        //Destructor
        ~WrongAnimal();

        //Function
        void    makeSound() const;
        std::string getType() const;
        
        //Operator
        WrongAnimal  &operator=(const WrongAnimal &cpy);

    protected:
        //Attribut
        std::string _type;
};

#endif