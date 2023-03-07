/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:38:13 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 23:38:13 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{

}

Span::~Span() {}

Span::Span(const Span &f)
{
	*this = f;
}

Span&	Span::operator=(const Span &f)
{
	_vec = f.getVector();
	_size = f.getSize();
	return (*this);
}

std::vector<int>	Span::getVector(void) const
{
	return (_vec);
}

unsigned int	Span::getSize(void) const
{
	return (_size);
}

void	Span::addNumber(int num)
{
	if (_vec.size() >= _size)
		throw SpanFull();
	_vec.push_back(num);
}

int		Span::shortestSpan(void)
{
	if(_size <= 1)
		throw EmptySpan();
	return(std::min_element(_vec.begin(), _vec.end()) - _vec.begin());
}

int		Span::longestSpan(void)
{
	if(_size <= 1)
		throw EmptySpan();
	return (std::max_element(_vec.begin(), _vec.end()) - _vec.begin());
}

void	Span::addRange(std::vector<int>::iterator begin, \
						std::vector<int>::iterator end, int size)
{
	if (size + _vec.size() >= _size)
		throw SpanFull();
	_vec.insert(_vec.end(), begin, end);
}

const char *Span::SpanFull::what() const throw()
{
	return ("Span is Full!");
}

const char *Span::EmptySpan::what() const throw()
{
	return ("Span is empty!!");
}
