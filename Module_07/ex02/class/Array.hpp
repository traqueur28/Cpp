/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:39:44 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/16 14:50:43 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <time.h>
# include <stdlib.h>

template<typename T>
class Array
{
    public:
        //Constructor
        Array<T>(): _n(0){
            this->_tab = new T[0];
        }

        Array<T>(unsigned int n): _n(n){
            this->_tab = new T[n];
        }

        Array<T>(const Array<T> &cpy)
        {
            this->_n = cpy._n;
            this->_tab = new T[_n];
            for (unsigned int i = 0; i < _n; i++)
                this->_tab[i] = cpy._tab[i];
        }

        //Destructor
        ~Array<T>(){
            if (this->_tab)
                delete [] (this->_tab);
        }

        //Operator
        Array<T>    &operator=(const Array<T> &cpy)
        {
            if (this->_tab)
                delete [] (this->_tab);
            this->_n = cpy._n;
            this->_tab = new T[_n];
            for (unsigned int i = 0; i < _n; i++)
                this->_tab[i] = cpy._tab[i];
            return (*this);
        }

        T           &operator[](unsigned int n)
        {
            if (this->_n <= n)
                throw (OutOfArray());
            return (this->_tab[n]);
        }

        //Thow
        class OutOfArray : public std::exception
		{
			public:
				virtual const char* what() const throw(){
                    return ("Out of Array");
                }
		};

        //Function
        unsigned int    size(){
            return (this->_n);
        }


    private:
        unsigned int    _n;
        T   *_tab;
};

#endif