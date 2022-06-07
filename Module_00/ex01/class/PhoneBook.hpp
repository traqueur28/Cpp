/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:02 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/07 10:45:16 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

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