/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:51:54 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 07:51:55 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
public:
    HumanB(std::string str);
    ~HumanB();
    void    attack(void);
    void    setWeapon(Weapon &name);

private:
    std::string _name;
    Weapon      *_weapon;
};

#endif