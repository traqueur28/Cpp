/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:00:04 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/18 14:12:09 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		//Constructor
			MutantStack(): std::stack<T>() {};
			MutantStack(const MutantStack &cpy){
				*this = cpy;
			};
		//Destructor
			virtual ~MutantStack() {};
		//Operator
			MutantStack	&operator=(MutantStack const &cpy){
				this->c = cpy.c;
				return (*this);
			};

		//Typedef
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		
		//Functions

		iterator				begin() { return (this->c.begin()); }
		iterator				end() { return (this->c.end()); }
		reverse_iterator		rbegin() { return (this->c.rbegin()); }
		reverse_iterator		rend() { return (this->c.rend()); }
};

#endif