/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:19:37 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 23:17:24 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "A Wild Cat Appears" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat is gone..." << std::endl;
}

Cat::Cat(const Cat &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Cat& Cat::operator=(const Cat &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		_type = f.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowwwww" << std::endl;
}

std::string Cat::getType(void) const
{
	return (_type);
}

Brain	*Cat::getBrain(void) const
{
	return (_brain);
}
