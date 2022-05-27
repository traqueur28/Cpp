/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:10 by jgourlin          #+#    #+#             */
/*   Updated: 2022/05/27 16:28:08 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../class/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "construction du PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "destuction du PhoneBook" << std::endl;
}