/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgourlin <jgourlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:13:33 by jgourlin          #+#    #+#             */
/*   Updated: 2022/07/18 12:23:50 by jgourlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../class/Span.hpp"


//Constructor
Span::Span(){
}

Span::Span(unsigned int N): _N(N), _Elem(0), _min(INT_MAX), _max(INT_MIN){
}

Span::Span(const Span &cpy): _N(cpy._N), _Elem(cpy._Elem), _min(cpy._min), _max(cpy._max){
	this->_tab.resize(this->_N);
	for (unsigned int i = 0; i < cpy._N; i++)
		this->_tab[i] = cpy._tab[i];
}

//Destuctor

Span::~Span(){
}

//Operaroe
Span	&Span::operator=(const Span &cpy)
{
	this->_N = cpy._N;
	this->_Elem = cpy._Elem;
	this->_min = cpy._min;
	this->_max = cpy._max;
	if (!this->_tab.empty())
		this->_tab.clear();
	this->_tab.resize(this->_N);
	for (unsigned int i = 0; i < cpy._N; i++)
		this->_tab[i] = cpy._tab[i];
	return (*this);
}

//Function

void	Span::addNumber(int n)
{
	if (this->_Elem >= this->_N)
		throw (MaxElem());
	this->_tab.push_back(n);
	this->_Elem++;
	if (n > this->_max)
		this->_max = n;
	if (n < this->_min)
		this->_min = n;
}

unsigned int	Span::shortestSpan() const
{
	if (this->_Elem < 2)
		throw (NotEnoughElem());
	Span	tmp(*this);
	std::sort(tmp._tab.begin(), tmp._tab.end());
	unsigned int	res = static_cast<unsigned int>(tmp._tab[1] - tmp._tab[0]);
	for (unsigned int i = 0; i < tmp._Elem; i++)
	{
		if (i + 1 < tmp._Elem && static_cast<unsigned int>(tmp._tab[i + 1] - tmp._tab[i]) < res)
			res = tmp._tab[i + 1] - tmp._tab[i];
	}
	return (res);
}

unsigned int	Span::longestSpan() const
{
	if (this->_Elem < 2)
		throw (NotEnoughElem());
	return (this->_max - this->_min);
}

void	Span::print() const
{
	for (unsigned int i = 0; i < this->_Elem; i++)
		std::cout << this->_tab[i] << " ";
	std::cout << std::endl;
}