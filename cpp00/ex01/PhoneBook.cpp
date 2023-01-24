/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 07:05:56 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/25 08:15:48 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::add(void) {

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_num;
	std::string	secret;

	std::cout << "First Name : ";
	std::getline(std::cin, first_name);
	std::cout << "Last Name : ";
	std::getline(std::cin, last_name);
	std::cout << "NickName : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number : ";
	std::getline(std::cin, phone_num);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, secret);
	
	std::cout << first_name << last_name << nickname << \
		phone_num << secret << std::endl;
	return (0);
}