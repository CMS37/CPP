/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 04:04:58 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 19:30:26 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{

	Data data(42);

	uintptr_t p1 = Serializer::serialize(&data);
	Data*	p2 = Serializer::deserialize(p1);

	if (p1 == (uintptr_t)p2)
		std::cout << "True\n";
	else
		std::cout << "False\n";

	/*
	int a = 42;

	uintptr_t p1 = reinterpret_cast<uintptr_t>(&a);
	uintptr_t p2 = (uintptr_t)(&a);
	int *b =  reinterpret_cast<int*>(p1);

	std::cout << &a << std::endl;
	std::cout << b << std::endl;
	std::cout << "-------------------------\n";
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << (uintptr_t)b << std::endl;
	*/
}
