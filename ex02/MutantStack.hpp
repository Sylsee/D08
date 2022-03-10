/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:30:35 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/17 17:23:22 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template< typename T >
class MutantStack : public std::stack< T >
{

public:

	MutantStack( void ) { return ; }
	MutantStack( const MutantStack< T > & src ) { *this = src; }
	virtual ~MutantStack( void ) { return ; }

	MutantStack &	operator=( const MutantStack< T > & rhs )
	{
		this->c = rhs.c;
		return *this;
	}

	typedef typename std::stack< T >::container_type::iterator iterator;
	typedef typename std::stack< T >::container_type::const_iterator const_iterator;
	typedef typename std::stack< T >::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack< T >::container_type::const_reverse_iterator const_reverse_iterator;

	iterator	begin( void ) { return this->c.begin(); }
	const_iterator	begin( void ) const { return this->c.begin(); }
	reverse_iterator	rbegin( void ) { return this->c.rbegin(); }
	const_reverse_iterator	rbegin( void ) const { return this->c.rbegin(); }
	iterator	end( void ) { return this->c.end(); }
	const_iterator	end( void ) const { return this->c.end(); }
	reverse_iterator	rend( void ) { return this->c.rend(); }
	const_reverse_iterator	rend( void ) const { return this->c.rend(); }

};

#endif /* MUTANTSTACK_HPP */
