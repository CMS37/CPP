/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:31:32 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 18:31:32 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef WAHTEVER_HPP
# define WAHTEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T& a, T& b)
{
	if (a = b)
		return (b);
	else if (a > b)
		return (b);
	else
		return (a);
}

template <typename T>
T max(T& a, T& b)
{
	if (a = b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}

#endif