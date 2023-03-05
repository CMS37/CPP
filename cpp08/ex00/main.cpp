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

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	std::cout << "--------------------vector--------------------\n";
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(5);
	vec.push_back(3);
	easyFind(vec, 5);
	easyFind(vec, 3);
	easyFind(vec, 10);
	// for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
	// {
	// 	std::cout << *iter << std::endl;
	// }
	std::cout << "--------------------list--------------------\n";
	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(5);
	lst.push_back(3);
	easyFind(lst, 5);
	easyFind(lst, 3);
	easyFind(vec, 10);
	// for (std::list<int>::iterator iter = lst.begin(); iter != lst.end(); ++iter)
	// {
	// 	std::cout << *iter << std::endl;
	// }
}
