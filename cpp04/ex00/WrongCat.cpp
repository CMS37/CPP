/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:19:37 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/14 17:19:37 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "A Wild WrongCat Appears" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is gone..." << std::endl;
}

void	WrongCat::makeSound(void) const
{ 
	std::cout << "Wrong Cat called" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (_type);
}