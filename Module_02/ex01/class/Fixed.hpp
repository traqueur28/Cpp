/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:08:20 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/25 13:19:25 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{
    public:
        //COnstructeur
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(Fixed const &copy);

        //Destructeur
        ~Fixed();

        //Operator
        Fixed   &operator=(Fixed const &op);

        //Function
        int getRawBits( void ) const;
        int toInt( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;

    private:
        int _nb;
        static const int _bit_nb;
   
};

std::ostream& operator<<(std::ostream &a, const Fixed &rhs);

#endif