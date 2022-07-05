/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 09:18:22 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/05 10:43:06 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        //Constructor
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &cpy);

        //Destructor
        ~DiamondTrap();

        //Operator
        DiamondTrap &operator=(DiamondTrap const &cpy);

        //Function
        void    whoAmI();
        void    display_info();
        
    private:
        //Constructor
        DiamondTrap();
        
        //Destructor
        //Operator
        //Function
        //Attribut
        std::string _name;
};



#endif