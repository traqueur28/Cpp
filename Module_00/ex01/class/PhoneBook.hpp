/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:02 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 08:24:20 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>

class PhoneBook
{

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	phonebook_add(int i);
	void	phonebook_search(void);


private:
	Contact		_contact[8];
};

#endif