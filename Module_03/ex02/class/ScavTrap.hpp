/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:17:00 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/05 08:36:27 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap  : public ClapTrap
{
    public:
        //Constructor
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &cpy); //par copie

        //Destructor
        ~ScavTrap();

        //Operator
        ScavTrap    &operator=(ScavTrap const &cpy);

        //Function
        void    attack(const std::string &target);
        void    guardGate();

        //Attributs

    private:
        //Constructor
        ScavTrap();

        //Destructor

        //Operator

        //Function

        //Attributs
};



#endif