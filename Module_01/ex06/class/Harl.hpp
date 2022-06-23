/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:55:48 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 09:56:48 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class   Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);

    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

};

#endif