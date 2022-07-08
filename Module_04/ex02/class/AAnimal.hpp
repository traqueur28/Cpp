/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:47:19 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/08 08:35:54 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class   AAnimal
{
    public:
        //Conctructor
        AAnimal();
        AAnimal(const AAnimal &cpy);

        //Destructor
        virtual ~AAnimal();

        //Function
        virtual void    makeSound() const = 0;
        std::string getType() const;
        
        //Operator
        AAnimal  &operator=(const AAnimal &cpy);

    protected:
        //Attribut
        std::string _type;
};

#endif