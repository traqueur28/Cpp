/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:07 by jgourlin          #+#    #+#             */
/*   Updated: 2022/05/27 16:27:33 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../class/Contact.hpp"

Contact::Contact(void)
{
	std::cout << "construction du Contact" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "destuction du Contact" << std::endl;
}