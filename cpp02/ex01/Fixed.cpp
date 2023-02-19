/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:18:25 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 21:35:07 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	_raw = i << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	//float 혹은 double 값에 int 값 1을 8 비트만큼 왼쪽으로 쉬프팅 한 값을 곱하면 된다. 
	//이 때 해당 값을 찾아낼 때 정확히 8 비트에 대해서만 남겨두어야 하므로, 곱한 뒤 남은 소수점에 대해서는 roundf로 처리한다.
	_raw = static_cast<int>(roundf(f * (1 << _bits)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
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
