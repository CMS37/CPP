/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:18:39 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/20 12:03:38 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "A Wild Dog Appears" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog is gone... " << std::endl;
}

Dog::Dog(const Dog &f)
{
	std::cout << "Copy constructor called" << std::endl;
	_type = f.getType();
	_brain = new Brain();
	*(_brain) = *(f.getBrain());
}

Dog& Dog::operator=(const Dog &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
	{	
		_type = f.getType();
		if (_brain)
		{
			delete _brain;
			_brain = new Brain();
		}
		*(_brain) = *(f.getBrain());
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wal! Wal!" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (_brain);
}
