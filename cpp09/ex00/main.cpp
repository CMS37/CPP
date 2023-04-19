/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:36:39 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/19 18:10:38 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	std::string path = "data.csv";
	BitcoinExchange btc(path);

	if (ac != 2)
	{
		std::cout << "Error: could not open file.\n";
		return (0);
	}
	btc.run(av[1]);
	return (0);
}
