/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:16:33 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 13:21:52 by jgourlin         ###   ########.fr       */
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

int ft_empty(std::ifstream &ifile)
{
    std::string line;

	std::getline(ifile, line);
	if (ifile.eof())
	{
		ifile.close();
		std::cerr << "Error: File empty" << std::endl;
	}
	ifile.close();
    return (0);
}

int ft_check_error(std::string s1, std::ifstream &ifile, char *argv)
{
    if (s1.empty())
        return (ft_error_s());
    ifile.open(argv);
    if (ifile.fail() || !ifile.is_open())
        return (ft_error_open());
    if (ft_empty(ifile))
        return (1);
    return (0);
}