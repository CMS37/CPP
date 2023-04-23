/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 04:09:22 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/24 01:03:22 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN rpn;

	if (ac != 2)
	{
		std::cout << "Error: Input data\n";
		return (0);
	}
	rpn.calculate(av[1]);
	return (0);
}



// int	main(int argc, char** argv)
// {
// 	if (argc != 2)
// 	{
// 		std::cout << "Error: program should only 1 argument\n";
// 		return (0);
// 	}
// 	RPN rpn;
// 	rpn.execute_operation(argv[1]);
// 	return (0);
// }