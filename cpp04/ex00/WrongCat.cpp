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

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "A Wild WrongCat Appears" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is gone..." << std::endl;
}

WrongCat::WrongCat(const WrongCat &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

WrongCat& WrongCat::operator=(const WrongCat &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		_type = f.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{ 
	std::cout << "Wrong Cat called" << std::endl;
}
