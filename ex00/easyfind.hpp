/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:02:30 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/22 20:23:02 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>

class NotFoundException: std::exception
{
public:
	const char *	what() const throw() { return "Value not found"; }
};

template< typename T >
int	easyfind( T & t, int find )
{
	typename T::iterator	it;

	it = std::find(t.begin(), t.end(), find);

	if (it == t.end())
		throw NotFoundException();
	return std::distance(t.begin(), it);
}

#endif
