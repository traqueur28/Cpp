/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:08:20 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/25 13:37:52 by jgourlin         ###   ########.fr       */
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

        int     operator> (Fixed const &op) const;
        int     operator< (Fixed const &op) const;
        int     operator>=(Fixed const &op) const;
        int     operator<=(Fixed const &op) const;
        int     operator==(Fixed const &op) const;
        int     operator!=(Fixed const &op) const;

        Fixed   operator+(Fixed const &op) const;
        Fixed   operator-(Fixed const &op) const;
        Fixed   operator*(Fixed const &op) const;
        Fixed   operator/(Fixed const &op) const;

        Fixed   &operator++();//pre
        Fixed    operator++(int);//post
        Fixed   &operator--();//pre
        Fixed    operator--(int);//post

        //Function
        int getRawBits( void ) const;
        int toInt( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;

        //Min Max
        static  Fixed &min(Fixed &a, Fixed &b);//a
        static  Fixed const &min(Fixed const &a, Fixed const &b);//a
        static  Fixed &max(Fixed &a, Fixed &b);//a
        static  Fixed const &max(Fixed const &a, Fixed const &b);//a
    
    private:
        int _nb;
        static const int _bit_nb;
   
};

std::ostream& operator<<(std::ostream &a, const Fixed &rhs);

#endif