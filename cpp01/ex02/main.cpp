/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 04:57:44 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/06 04:57:44 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string& ref = str;

	std::cout << "Print str : " << str << std::endl;
	std::cout << "Print ptr : " << ptr << std::endl;
	std::cout << "Print ref : " << ref << std::endl;
	return (0);
}