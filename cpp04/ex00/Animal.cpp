/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:11:52 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 22:58:59 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal Appears" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal is gone..." << std::endl;
}

Animal::Animal(const Animal &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Animal& Animal::operator=(const Animal &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		_type = f.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "...." << std::endl;
}

std::string Animal::getType(void) const
{
	return (_type);
}