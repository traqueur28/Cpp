/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:51:57 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 07:51:58 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
    public:
        HumanA(std::string name, Weapon &str);
        ~HumanA();
        void    attack(void);

    private:
        std::string _name;
        Weapon      &_weapon;
};

#endif