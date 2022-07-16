/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:07:23 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/16 10:15:54 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void    iter(T *tab, int t, void f(T &funct))
{
    for (int i = 0; i < t; i++)
        f(tab[i]);
}

template<typename T>
void    print(T &elem){
    std::cout << elem << " ";
}

template<typename T>
void    increment(T &elem){
    elem++;;
}

#endif