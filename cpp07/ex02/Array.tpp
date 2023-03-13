/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:00:46 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 21:58:46 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_arr = new T[0];
	_len = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_arr = new T[n];
	_len = n;
}

template <typename T>
Array<T>::~Array()
{
	_len = 0;
	delete[] _arr;
}

template <typename T>
Array<T>::Array(const Array<T> &f)
{
	_len = f._len;
	_arr = new T[_len];
	for(unsigned int i = 0; i < _len; i++)
		_arr[i] = f[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &f)
{
	if (this != &f)
	{
		_len = f._len;
		if (_arr != NULL)
			delete [] _arr;
		_arr = new T[_len];
		for(unsigned int i = 0; i < _len; i++)
			_arr[i] = f[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int n) const
{
	if (_len <= n)
		throw IndexError();
	return (_arr[n]);
}

template <typename T>
const char* Array<T>::IndexError::what(void) const throw()
{
	return ("Over Index!");
}
