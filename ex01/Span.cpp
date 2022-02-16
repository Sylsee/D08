/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:26:54 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/16 22:33:36 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span( unsigned int size ) : _size(size)
{
	return ;
}

Span::Span( Span const & src )
{
	*this = src;
}

Span::~Span( void )
{
	return ;
}

Span &	Span::operator=( Span const & rhs )
{
	if (this != &rhs) {
		this->_size = rhs.size();
		this->_v = rhs._v;
	}

	return *this;
}

unsigned int	Span::size( void ) const
{
	return this->_size;
}

std::vector<int>	Span::getVector( void ) const
{
	return this->_v;
}

void	Span::addNumber( int const number )
{
	if (this->_v.size() >= this->size())
		throw std::overflow_error("Span is full, can't add");

	this->_v.push_back(number);
}

void	Span::addNumber( unsigned int const size, int const numbers )
{
	if (this->_v.size() + size > this->size())
		throw std::overflow_error("Can't add so many numbers");

	this->_v.insert(this->_v.end(), size, numbers);
}

int		Span::shortestSpan( void ) const
{
	if (this->_v.size() < 2)
		throw std::length_error("Span size is less than 2");

	std::vector<int>			tmp(this->_v);
	std::vector<int>::iterator	it, ite;

	std::sort(tmp.begin(), tmp.end());
	ite = tmp.end();

	int	x;
	int	min = tmp.at(1) - tmp.at(0);

	for (it = tmp.begin() + 1; it != ite; it++) {
		x = *it - *(it - 1);
		if (x < min)
			min = x;
	}
	return min;
}

int		Span::longestSpan( void ) const
{
	if (this->_v.size() < 2)
		throw std::length_error("Span size is less than 2");

	return (*std::max_element(this->_v.begin(), this->_v.end())
			- *std::min_element(this->_v.begin(), this->_v.end()));
}

std::ostream &	operator<<( std::ostream & o, Span const & s )
{
	std::vector<int>::iterator	it, ite;

	it = s.getVector().begin();
	ite = s.getVector().end();

	o << "Span size: " << s.size() << std::endl
		<< "Span content:" << std::endl;

	for (; it != ite; it++)
		o << *it << std::endl;
	return o;
}
