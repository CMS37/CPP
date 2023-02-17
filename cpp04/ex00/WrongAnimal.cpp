/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:11:52 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/14 17:11:52 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "An WrongAnimal Appears" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal is gone..." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &f)
{
	std::cout << "Copy constructor called" << std::endl;
	_type = f.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		_type = f.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "...." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}