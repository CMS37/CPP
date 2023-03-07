/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:49:12 by marvin            #+#    #+#             */
/*   Updated: 2023/03/07 16:44:40 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	switch(rand() % 3)
	{
		case 0: return (new A());
		case 1: return (new B());
		case 2:	return (new C());
		default: return (NULL);
	}
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "A\n";
	else if (b)
		std::cout << "B\n";
	else if (c)
		std::cout << "C\n";
}

void	identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A\n";
		return ;
	}
	catch(...)
	{
	}
	try
	{
		B  b = dynamic_cast<B&>(p);
		std::cout << "B\n";
		return ;
	}
	catch(...)
	{
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C\n";
		return ;
	}
	catch(...)
	{
	}
}