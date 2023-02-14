/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:18:39 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/14 17:18:39 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "A Wild Dog Appears" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog is gone... " << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wal! Wal!" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (_type);
}