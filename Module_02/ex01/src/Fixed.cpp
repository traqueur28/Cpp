/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:28:22 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/25 13:19:22 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Fixed.hpp"
#include "iostream"

Fixed::Fixed(): _nb(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    this->_nb = nb << Fixed::_bit_nb;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    this->_nb = roundf(nb * (1 << Fixed::_bit_nb));
}

Fixed::Fixed(Fixed const &copy): _nb(copy._nb)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_nb);
}

int     Fixed::toInt()const
{
    return (this->_nb >> Fixed::_bit_nb);
}

void    Fixed::setRawBits(int const raw)
{
    this->_nb = raw;
}

float   Fixed::toFloat()const
{
    return ((float)this->_nb / (float)(1 << Fixed::_bit_nb));
}

//Operator

Fixed&  Fixed::operator=(Fixed const &op)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = op.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream &a, const Fixed &rhs)
{
    a << rhs.toFloat();
    return (a);
}

const int Fixed::_bit_nb = 8;