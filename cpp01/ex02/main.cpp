/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 04:57:44 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 18:28:47 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string& ref = str;

	std::cout << "Memory address" << std::endl;
	std::cout << "string : " << &str << std::endl;
	std::cout << "pointer : " << &ptr << std::endl;
	std::cout << "reference : "<< &ref << std::endl;
	std::cout << "Print string" << std::endl;
	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
