/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:09:31 by marvin            #+#    #+#             */
/*   Updated: 2023/04/20 08:38:07 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "---------------------------------------------\n";
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "Try add num more than size\n";

		try
		{
			sp.addNumber(42);
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------------------------\n";
	{
		std::cout << "Try 10,000 size span\n";

		Span sp1 = Span(10000);
		for(int i = 0;i < 10000; i++)
			sp1.addNumber(i);

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	std::cout << "---------------------------------------------\n";
	{
		std::cout << "Try empty span\n";

		Span sp2 = Span(5);

		try
		{
			std::cout << sp2.shortestSpan() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			sp2.addNumber(42);
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------------------------\n";
	{
		std::cout << "Try add span\n";
		
		Span sp3 = Span(5);
		std::vector<int> vec;

		sp3.addNumber(3);
		vec.push_back(10);
		vec.push_back(23);
		vec.push_back(423);
		vec.push_back(15);
		try
		{
			sp3.addspan(vec);
			if (sp3.longestSpan() != 420)
				std::cout << "Add span is fail\n";
			else
				std::cout << "Add span is success\n";
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------------------------\n";
	return (0);
}
