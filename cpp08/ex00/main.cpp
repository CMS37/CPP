/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:09:31 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 22:48:05 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	{
		std::cout << "--------------------vector--------------------\n";
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(5);
		vec.push_back(3);
		// for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
		// {
		// 	std::cout << *iter << std::endl;
		// }
		easyFind(vec, 5);
		easyFind(vec, 3);
		easyFind(vec, 10);
	}
	{
		std::cout << "--------------------list--------------------\n";
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(5);
		lst.push_back(3);
		// for (std::list<int>::iterator iter = lst.begin(); iter != lst.end(); ++iter)
		// {
		// 	std::cout << *iter << std::endl;
		// }
		easyFind(lst, 2);
		easyFind(lst, 1);
		easyFind(lst, 10);
	}
	
}
