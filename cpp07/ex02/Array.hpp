/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:00:57 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 19:00:57 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_len;

	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array<T> &f);
		Array& operator=(const Array<T> &f);

		T&	operator[](unsigned int n);
		class IndexError : public std::exception
		{
			public:
				const char* what(void) const throw()
		};
};

#endif