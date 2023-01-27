/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:53:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/27 21:16:17 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	int			i;
	std::string	cmd;
	PhoneBook	book;
	
	i = 0;
	while (1)
	{
		std::cout << "PhoneBook > ";
		if (!(std::getline(std::cin, cmd)))
			return (1);
		if (cmd == "ADD" || cmd == "add")
			book.add(i);
		else if (cmd == "SERCH" || cmd == "serch")
			;
		else if (cmd == "EXIT" || cmd == "exit")
			return (0);
	}
}
