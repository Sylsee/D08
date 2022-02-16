/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:26:54 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/16 22:33:09 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{

private:

	unsigned int		_size;
	std::vector<int>	_v;

public:

	Span( unsigned int size = 10 );
	Span( Span const & src );
	virtual ~Span( void );

	Span &	operator=( Span const & rhs );

	unsigned int		size( void ) const;
	std::vector<int>	getVector( void ) const;

	void	addNumber( int const number );
	void	addNumber( unsigned int const size, int const number );
	int		shortestSpan( void ) const;
	int		longestSpan( void ) const;

};

std::ostream &	operator<<( std::ostream & o, Span const & s );

#endif /* SPAN_HPP */
