/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:13:34 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/18 12:19:54 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
		//Constructor
		Span(unsigned int N);
		Span(const Span &cpy);

		//Destructor
		~Span();

		//Operator
		Span &operator=(const Span &cpy);

		//Function
		void addNumber(int n);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			print() const;

		//Throw

		class MaxElem: public std::exception
		{
			public:
				virtual const char *what() const throw(){return ("Maximum has been reach");}
		};

		class NotEnoughElem: public std::exception
		{
			public:
				virtual const char *what() const throw(){return ("Not Enough Element");}
		};


	private:
		Span();
		//Attribut
		std::vector<int>	_tab;
		unsigned int		_N;
		unsigned int		_Elem;
		int	_min;
		int	_max;

};

#endif