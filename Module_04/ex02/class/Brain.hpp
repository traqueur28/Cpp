/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 06:56:55 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/08 08:19:48 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:
        //Constructor
        Brain();
        Brain(const Brain &cpy);

        //Destructor
        virtual ~Brain();

        //Operator
        Brain   &operator=(const Brain &cpy);

        //Function
        void    set_ideas(std::string);
        std::string get_idea();
    
    private:
        std::string _ideas[100];
};


#endif