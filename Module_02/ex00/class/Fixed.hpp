/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:08:20 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/25 11:58:19 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const &copy);
        ~Fixed();
        Fixed   &operator=(Fixed const& op);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
    
    private:
        int _nb;
        static const int _bit_nb;
   
};

#endif