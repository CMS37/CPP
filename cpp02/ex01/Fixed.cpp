/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:18:25 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/08 20:18:25 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	_raw = i << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	_raw = f.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		_raw = f.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

float	Fixed::toFloat(void) const
{
	std::cout << "Float constructor called" << std::endl;
}

int		Fixed::toInt(void) const
{
	return (_raw);
}


std::ostream& operator<<(std::ostream& o, const Fixed& f)
{
	return (o << f.toFloat());
}
