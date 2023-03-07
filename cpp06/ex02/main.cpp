/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:48:52 by marvin            #+#    #+#             */
/*   Updated: 2023/03/07 16:38:36 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base *ptr = generate();

	identify(*ptr);
	identify(ptr);

	delete ptr;

	return (0);
}

/*
dynamic_cast는 포인터로 캐스팅시 실패시 NULL값을 반환하나,
참조자로 캐스팅 할 경우 예외를 throw해버린다. << 참조자는 try catch구문이용
*/
