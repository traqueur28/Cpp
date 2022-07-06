/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:45:11 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 13:45:16 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Replace.hpp"

int ft_open_file(char **argv)
{
    std::string     nfi = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    std::string     nfo = nfi + ".replace";
    std::string     tmp;
    std::ifstream   ifile;
    std::ofstream   ofile;
    const char*     str = nfo.c_str();
    int             i;

    if (ft_check_error(s1, ifile, argv[1]))
        return (1);
    ifile.open(argv[1]);
        if (ifile.fail())
            return (ft_error_open());
    ofile.open(str);
    if (ofile.fail() || !ofile.is_open())
    {
        ft_error_open();
        ifile.close();
        return (1);
    }
    while (getline(ifile, tmp))
    {
        i = tmp.find(s1, 0);
        while (i != -1)
        {
            tmp.erase(i, s1.size());
            tmp.insert(i, s2);
            i = tmp.find(s1, i + s2.size());
        }
        ofile << tmp;
        if (!ifile.eof())
            ofile << "\n";
    }
    ifile.close();
    ofile.close();
    return (0);
}

int main(int argc, char** argv)
{
    if (argc != 4)
        return (ft_error());
    return (ft_open_file(argv));
}