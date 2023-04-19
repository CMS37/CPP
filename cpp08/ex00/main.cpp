/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:09:31 by marvin            #+#    #+#             */
/*   Updated: 2023/04/20 08:20:49 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	{
		std::cout << "--------------------vector--------------------\n";
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(5);
		vec.push_back(3);
		try
		{
			std::cout << easyFind(vec, 5) << std::endl;
			std::cout << easyFind(vec, 3) << std::endl;
			std::cout << easyFind(vec, 10) << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "--------------------list--------------------\n";
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(5);
		lst.push_back(3);
		try
		{
			std::cout << easyFind(lst, 2) << std::endl;
			std::cout << easyFind(lst, 1) << std::endl;
			std::cout << easyFind(lst, 10) << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}	
}
