/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:37:21 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/31 00:15:28 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Info.hpp"

void	Info::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void	Info::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void	Info::setNickName(std::string nickName) {
	this->nickName = nickName;
}

void	Info::setSecret(std::string secret) {
	this->secret = secret;
}

void	Info::setPhoneNum(std::string phoneNum) {
	this->phoneNum = phoneNum;
}

void	Info::setNum(int num) {
	this->num = num;
}

std::string	Info::getFirstName(void) {
	return this->firstName;
}

std::string	Info::getLastName(void) {
	return this->lastName;
}

std::string	Info::getNickName(void) {
	return this->nickName;
}

std::string	Info::getSecret(void) {
	return this->secret;
}

std::string	Info::getPhoneNum(void) {
	return this->phoneNum;
}

int	Info::getNum(void) {
	return this->num + 1;
}