/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 07:05:56 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/30 20:21:15 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::setInfo(void) {
	static int	i = 0;
	std::string firstName;
	std::string	lastName;
	std::string	nickName;
	std::string secret;
	std::string	phoneNum;
	std::string	cmd;
	
	this->info[i % 8].setNum(i % 8);
	std::cout << "First Name : ";
	std::getline(std::cin, cmd);
	this->info[i % 8].setFirstName(cmd);
	std::cout << "Last Name : ";
	std::getline(std::cin, cmd);
	this->info[i % 8].setLastName(cmd);
	std::cout << "Nick Name : ";
	std::getline(std::cin, cmd);
	this->info[i % 8].setNickName(cmd);
	std::cout << "Secret : ";
	std::getline(std::cin, cmd);
	this->info[i % 8].setSecret(cmd);
	std::cout << "Phone Number : ";
	std::getline(std::cin, cmd);
	this->info[i % 8].setPhoneNum(cmd);
	i++;
}

void	PhoneBook::serchInfo(void) {
	std::cout << 
}

int	main(void)
{
	Info		info;
	PhoneBook	book;
	std::string	cmd;
	
	while (1)
	{
		std::cout << "PhoneBook:> ";
		if (!(std::getline(std::cin, cmd)))
			return (1);
		if (cmd == "ADD")
			book.setInfo();
		else if (cmd == "SERCH")
			book.serchInfo();
		else if (cmd == "EXIT" || cmd == "exit")
			return (0);
	}
}
