/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:48:54 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 20:42:54 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	std::cout << "--------------------------------------\n";
	char c[3] = {'a', 'b', 'c'};
	::iter(c, 3, test);
	std::cout << "--------------------------------------\n";
	int i[5] = {0, 1, 2, 3, 4};
	::iter(i, 5, test);
	std::cout << "--------------------------------------\n";
	return (0);
}
