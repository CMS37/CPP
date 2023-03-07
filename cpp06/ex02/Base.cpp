/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:49:12 by marvin            #+#    #+#             */
/*   Updated: 2023/03/07 16:07:24 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	Base::generate(void)
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

void	Base::identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
		std::cout << "ERROR! NON TYPE!\n";
}

void	Base::identify(Base &p)
{
	// bool error
	if (dynamic_cast<A&>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B&>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C&>(p))
		std::cout << "C\n";
	else
		std::cout << "ERROR! NON TYPE!\n";
}