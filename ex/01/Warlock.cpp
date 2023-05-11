/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 03:13:54 by min-cho           #+#    #+#             */
/*   Updated: 2023/05/12 03:13:54 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string str1, std::string str2) : name(str1), title(str2)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";
}

Warlock::Warlock(const Warlock &f)
{
	*this = f;
}

Warlock& Warlock::operator=(const Warlock &f)
{
	this->name = f.getName();
	this->title = f.getTitle();
	return (*this);
}

void	Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}


std::string Warlock::getName(void) const
{
	return (name);
}

std::string Warlock::getTitle(void) const
{
	return (title);
}