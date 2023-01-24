/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:53:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/25 08:00:01 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string cmd;
	PhoneBook book;
	
	while (1)
	{
		std::cout << "PhoneBook > ";
		if (!(std::getline(std::cin, cmd)))
			return (1);
		if (cmd == "ADD")
			book.add(2);
		else if (cmd == "SERCH")
			;
		else if (cmd == "EXIT")
			std::cout << "3" << std::endl;
	}	
}
