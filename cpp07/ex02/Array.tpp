/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:00:46 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 19:00:46 by marvin           ###   ########seoul.kr  */
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
	delete[] _arr;
}

template <typename T>
Array<T>::Array(cosnt Array<T> &f)
{
	_len = f._len;
	_arr = new T[_len];
	for(int i = 0; i < _len; i++)
		_arr[i] = f[i];
}

template <typenmae T>
Array<T>& Array<T>::operator=(const Array<T> &f)
{
	if (this != &f)
	{
		_len = f._len;
		if (_arr != NULL)
			delete [] _arr;
		_arr = new T[_len];
		for(int i = 0; i < _len; i++)
			_arr[i] = f[i];
	}
	return (*this);
}

template <typenmae T>
T&	Array<T>::operator[](unsigned int n)
{
	if (_len <= n)
		throw exception();
	return (_arr[i]);
}

const char* IndexError::what(void) const throw()
{
	return ("Over Index!");
}