/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:26:29 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/16 22:39:58 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ostream>

int main( void )
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span	s(4);

		try
		{
			s.addNumber(27);
			s.addNumber(49);
			s.addNumber(29);
			s.addNumber(1);
			s.addNumber(14);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span	s(0);

		try
		{
			s.shortestSpan();
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Span	s(20000);

		{
			try
			{
				s.addNumber(20001, 9);
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}
		}
		s.addNumber(20000, 9);

		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;

//		std::cout << s;
	}

	return 0;
}
