/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 08:34:23 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/05 08:56:31 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap  : public ClapTrap
{
    public:
        //Constructor
        FragTrap(std::string name);
        FragTrap(FragTrap const &cpy);

        //Destructor
        ~FragTrap();

        //Operator
        FragTrap    &operator=(FragTrap const &cpy);

        //Function
        void    highFivesGuys(void);

        //Attributs
        
    private:
        //Constructor
        FragTrap();

        //Destructor

        //Operator

        //Function

        //Attributs
        
};

#endif