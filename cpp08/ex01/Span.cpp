/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:38:13 by marvin            #+#    #+#             */
/*   Updated: 2023/04/20 08:36:46 by min-cho          ###   ########seoul.kr  */
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
	unsigned int	tmp = 0;
	unsigned int	res = UINT_MAX;
	std::vector<int> dest;

	if(_vec.size() <= 1)
		throw EmptySpan();
	dest.assign(_vec.begin(),_vec.end());
	sort(dest.begin(), dest.end());
	std::vector<int>::iterator iter = dest.begin();
	for(; iter != dest.end(); ++iter)
	{
		if (dest.end() == std::next(iter,1))
			break ;
		tmp = *std::next(iter, 1) - *iter;
		if(tmp < res)
			res = tmp;
	}
	return(res);
}

int		Span::longestSpan(void)
{
	unsigned int	res = 0;
	std::vector<int> dest;

	if(_vec.size() <= 1)
		throw EmptySpan();
	dest.assign(_vec.begin(),_vec.end());
	sort(dest.begin(), dest.end());
	res = *dest.rbegin() - *dest.begin();
	return (res);
}

void	Span::addspan(std::vector<int> src)
{
	if (src.size() + _vec.size() > _size)
		throw SpanFull();
	_vec.insert(_vec.end(), src.begin(), src.end());
}

const char *Span::SpanFull::what() const throw()
{
	return ("Span is Full!");
}

const char *Span::EmptySpan::what() const throw()
{
	return ("Span is empty!!");
}
