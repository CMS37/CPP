/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:09:31 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 22:09:31 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "---------------------------------------------\n";
	std::cout << "Try add num more than size\n";

	try
	{
		sp.addNumber(42);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "Try 10,000 size span\n";

	Span sp1 = Span(10000);
	srand(time(NULL));
	for(int i = 0;i < 10000; i++)
		sp1.addNumber(rand() % 10000);

	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	std::cout << "---------------------------------------------\n";
	std::cout << "Try empty span\n";

	Span sp2 = Span(5);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------\n";
	std::cout << "Try add span\n";
	
	Span sp3 = Span(10);
	std::vector<int> vec;

	vec.push_back(4);
	vec.push_back(23);
	vec.push_back(11);
	vec.push_back(12);
	vec.push_back(421);
	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
	sp3.addRange(vec.begin(), vec.end(), vec.size());
	std::cout << "---------------------------------------------\n";
	return (0);
}
