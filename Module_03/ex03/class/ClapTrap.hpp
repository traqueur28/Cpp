/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:44:41 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/05 10:05:20 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        //Constructor
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &cpy); //par copie

        //Destructor
        ~ClapTrap();

        //Operator
        ClapTrap    &operator=(ClapTrap const &cpy);

        //Function
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        void    display_info();

        unsigned int    Get_pdv()const;
        unsigned int    Get_pe()const;
        unsigned int    Get_ad()const;
        std::string     Get_name()const;
        


    protected:
        //Constructor

        //Destructor

        //Operator

        //Function

        //Attributs
        std::string _name;
        unsigned int _pdv;
        unsigned int _pe;
        unsigned int _ad;
        
    private:
        ClapTrap();
};

#endif