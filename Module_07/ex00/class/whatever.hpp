/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:42:20 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/16 09:58:07 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>


//SWAP
template<typename T>

void    swap(T &a, T &b)
{
    T   tmp = a;
    a = b;
    b = tmp;
}

//MIN
template<typename T>

T   min(const T &a, const T &b){
    return ((a < b) ? a : b);
}

//MAX
template<typename T>

T   max(const T &a, const T &b){
    return ((a > b) ? a : b);
}
#endif