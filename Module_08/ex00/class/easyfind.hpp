/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:10:29 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/18 09:56:00 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <iomanip>
# include <algorithm>
# include <vector>

class NotFound: public std::exception
{
	public:
		virtual const char *what() const throw(){return ("Occurrence Not Found");}
};

template <typename T>
	void	easyfind(const T &container, int nb)
	{
		typename T::const_iterator res;
		res = find(container.begin(), container.end(), nb);
		try{
			if (res == container.end())
				throw (NotFound());
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what();
			return ;
		}
		std::cout << "Yes, " << *res << " is here";
	}

template <typename T>
	void	print(const T tab, int size)
	{
		for (int i = 0; i < size; i++)
			std::cout << tab[i] << " ";
		std::cout << std::endl;
	}


#endif