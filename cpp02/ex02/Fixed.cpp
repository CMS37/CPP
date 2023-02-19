/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:18:25 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 21:42:40 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	_raw = i << _bits;
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	_raw = static_cast<int>(roundf(f * (1 << _bits)));
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed& Fixed::operator=(const Fixed &f)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		_raw = f.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_raw);
}

void	Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_raw) / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_raw >> _bits);
}


std::ostream& operator<<(std::ostream& o, const Fixed& f)
{
	return (o << f.toFloat());
}

bool	Fixed::operator>(const Fixed &f) const
{
	return (_raw > f.getRawBits());
}

bool	Fixed::operator<(const Fixed &f) const
{
	return (_raw < f.getRawBits());
}

bool	Fixed::operator>=(const Fixed &f) const
{
	return (_raw >= f.getRawBits());
}

bool	Fixed::operator<=(const Fixed &f) const
{
	return (_raw <= f.getRawBits());
}

bool	Fixed::operator==(const Fixed &f) const
{
	return (_raw == f.getRawBits());
}

bool	Fixed::operator!=(const Fixed &f) const
{
	return (_raw != f.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &f)
{
	Fixed tmp(this->toFloat() + f.toFloat());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &f)
{
	Fixed tmp(this->toFloat() - f.toFloat());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &f)
{
	Fixed tmp(this->toFloat() * f.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &f)
{
	Fixed tmp(this->toFloat() / f.toFloat());
	return (tmp);
}

Fixed	Fixed::operator++(void)
{
	_raw += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	_raw += 1;
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	_raw -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	_raw -= 1;
	return (*this);
}

Fixed&		Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed&		Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}
