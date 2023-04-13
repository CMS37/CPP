/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 04:10:19 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/14 04:10:19 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cout << "Error\n";
		return (0);
	}

	PmergeMe p_merg_me;
	p_merg_me.merge_me(argv, argc);
	return (0);
}
