/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 07:05:56 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 15:57:55 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::setInfo(void) 
{
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
	if (cmd.empty())
	{
		std::cout << "Wrong input" << std::endl;
		return ;
	}
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

void	printInfo(std::string str)
{
	std::string	tmp;
	int			len;

	len = str.length();
	if (len > 10)
	{
		tmp = str.substr(0,9);
		std::cout << "|" << tmp << ".";
	}
	else
	{
		len -= 10;
		std::cout << "|";
		while (len != 0)
		{
			std::cout << " ";
			len++;
		}
		std::cout << str;
	}
}

void	PhoneBook::serchInfo(void) 
{
	int	i;

	if (this->info[0].getFirstName().empty())
	{
		std::cout << "No User in book, please add user" << std::endl;
		return ;
	}
	else
		std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
	i = -1;
	while (++i < 8)
	{	
		if (!this->info[i].getFirstName().empty())
		{
			std::cout << "|         " << this->info[i].getNum();
			printInfo(this->info[i].getFirstName());
			printInfo(this->info[i].getLastName());
			printInfo(this->info[i].getNickName());
			std::cout << "|" << std::endl;
		}
	}
}
