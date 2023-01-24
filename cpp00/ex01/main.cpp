/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:53:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/25 07:06:09 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	main(void)
{
	std::string cmd;
	
	while (1)
	{
		std::cout << "PhoneBook > ";
		if (!(std::getline(std::cin, cmd)))
			return (1);
		if (cmd == "ADD")
			;
		else if (cmd == "SERCH")
			;
		else if (cmd == "EXIT")
			;
	}	
}
