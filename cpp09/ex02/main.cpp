/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 04:10:19 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/20 12:35:26 by min-cho          ###   ########seoul.kr  */
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
	pm.merge(ac, av);
	return (0);
}


//test code
//./PmergeMe `jot -r 10000 1 1000000 | tr '\n' ' '`