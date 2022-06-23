/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:51:51 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 07:51:52 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
public:
    Weapon();
	Weapon(std::string str);
    ~Weapon();
    const std::string   &getType();
    void                setType(std::string str);

private:
    std::string type;

};


#endif