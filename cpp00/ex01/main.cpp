/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:53:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/23 19:44:12 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	cmd;
	
	while (1)
	{
		std::cout << "PhoneBook > ";
	//	std::getline(std::cin, cmd);
		getline(std::cin,cmd);
		if (cmd == "ADD" || cmd == "add")
			book.setInfo();
		else if (cmd == "SERCH" || cmd == "serch")
			book.serchInfo();
		else if (cmd == "EXIT" || cmd == "exit")
			return (0);
	}
}
