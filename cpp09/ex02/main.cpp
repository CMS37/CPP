/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 04:10:19 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/23 18:29:32 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	PmergeMe pm;

	if (ac < 2)
	{
		std::cout << "Error\n";
		return (0);
	}
	pm.merge_insert_sort(ac, av);
	return (0);
}


//test code
//./PmergeMe `jot -r 10000 1 1000000 | tr '\n' ' '`