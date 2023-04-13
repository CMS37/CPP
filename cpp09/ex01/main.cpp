/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 04:09:22 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/14 04:09:22 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Error: program should only 1 argument\n";
		return (0);
	}
	RPN rpn;
	rpn.execute_operation(argv[1]);
	return (0);
}