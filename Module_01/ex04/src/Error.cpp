/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:16:33 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/23 09:04:11 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Replace.hpp"

int ft_error()
{
    std::cerr << "Error: Argument invalid <file> <s1> <s2>" << std::endl;
    return (1);
}

int ft_error_open()
{
    std::cerr << "Error: File isn't open" << std::endl;
    return (1);
}

int ft_error_s()
{
    std::cerr << "Error: Unvalid string" << std::endl;
    return (1);
}