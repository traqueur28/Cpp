/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:17:53 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 09:38:36 by jgourlin         ###   ########.fr       */
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