/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 08:14:22 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/06 13:35:01 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

//   Error.cpp   

int ft_check_error(std::string s1, std::ifstream &ifile, char *argv);
int ft_empty(std::ifstream &ifile);
int ft_error();
int ft_error_open();
int ft_error_s();

#endif