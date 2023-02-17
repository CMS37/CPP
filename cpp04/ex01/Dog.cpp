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
	_brain = new Brain();
	std::cout << "A Wild Dog Appears" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog is gone... " << std::endl;
}

Dog::Dog(const Dog &f)
{
	std::cout << "Copy constructor called" << std::endl;
	_type = f.getType();
}

Dog& Dog::operator=(const Dog &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		_type = f.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wal! Wal!" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (_type);
}

Brain	*Dog::getBrain(void) const
{
	return (_brain);
}