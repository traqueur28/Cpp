/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:50:05 by jgourlin          #+#    #+#             */
/*   Updated: 2022/06/20 08:24:30 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>

class Contact
{

public:
	Contact	(void);
	~Contact(void);

	void	contact_add(void);
	void	print_name(void);
	void	contact_info(void);

private:
	void	_print_string(std::string str);
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _secret;
};

#endif