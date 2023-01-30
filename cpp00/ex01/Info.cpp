/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:37:21 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/30 20:20:52 by min-cho          ###   ########.fr       */
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

string	Info::getFirstName(void) {
	return firstName;
}