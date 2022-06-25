/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:27:41 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/25 14:08:38 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Fixed.hpp"

int main( void ) {
    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;

        std::cout << b << std::endl;

        std::cout << Fixed::max( a, b ) << std::endl;
    }
    std::cout << "---   END MAIN   ---" << std::endl << "--- MY MAIN   ---" << std::endl;

    {
        std::cout << "---   COMPAR   ---" << std::endl << std::endl;
        Fixed	a(42);
		Fixed	b(5.0f);
		Fixed	c(5.05f);
		Fixed	d(42);
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		
		std::cout << std::endl;
		std::cout << "a > d  ->" << (a > d) << std::endl;
		std::cout << "a < d  ->" << (a < d) << std::endl;
		std::cout << "a >= d ->" << (a >= d) << std::endl;
		std::cout << "a <= d ->" << (a <= d) << std::endl;
		std::cout << "a == d ->" << (a == d) << std::endl;
		std::cout << "a != d ->" << (a != d) << std::endl;
		
		std::cout << std::endl;
		std::cout << "a > c  ->" << (a > c) << std::endl;
		std::cout << "a < c  ->" << (a < c) << std::endl;
		std::cout << "a >= c ->" << (a >= c) << std::endl;
		std::cout << "a <= c ->" << (a <= c) << std::endl;
		std::cout << "a == c ->" << (a == c) << std::endl;
		std::cout << "a != c ->" << (a != c) << std::endl;
		
		std::cout << std::endl;
		std::cout << "b > c  ->" << (b > c) << std::endl;
		std::cout << "b < c  ->" << (b < c) << std::endl;
		std::cout << "b >= c ->" << (b >= c) << std::endl;
		std::cout << "b <= c ->" << (b <= c) << std::endl;
		std::cout << "b == c ->" << (b == c) << std::endl;
		std::cout << "b != c ->" << (b != c) << std::endl;
    }

    {
        std::cout << "---   OPERATOR   ---" << std::endl << std::endl;
		Fixed	a(42);
		Fixed	b(28);
		Fixed	c(4.5f);
		Fixed	d(2.5f);
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		
		std::cout << std::endl;
		std::cout << "a + b ->" << (a + b) << std::endl;
		std::cout << "a - b ->" << (a - b) << std::endl;
		std::cout << "a * b ->" << (a * b) << std::endl;
		std::cout << "a / b ->" << (a / b) << std::endl;

		std::cout << std::endl;
		std::cout << "a + c ->" << (a + c) << std::endl;
		std::cout << "a - c ->" << (a - c) << std::endl;
		std::cout << "a * c ->" << (a * c) << std::endl;
		std::cout << "a / c ->" << (a / c) << std::endl;
		
		std::cout << std::endl;
		std::cout << "c + d ->" << (c + d) << std::endl;
		std::cout << "c - d ->" << (c - d) << std::endl;
		std::cout << "c * d ->" << (c * d) << std::endl;
		std::cout << "c / d ->" << (c / d) << std::endl;
    }

    {
        std::cout << "---   MIN MAX   ---" << std::endl << std::endl;
		Fixed	a(42);
		Fixed	b(28);
		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << std::endl;
		std::cout << "min(a, b) ->" << Fixed::min( a, b ) << std::endl;
		std::cout << "max(a, b) ->" << Fixed::max( a, b ) << std::endl;

    }

return 0;
}