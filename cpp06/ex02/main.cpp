/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:48:52 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 17:48:52 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base *ptr = Base::generate();

	Base::identify(*ptr);
	Base::identify(ptr);

	delete ptr;

	return (0);
}