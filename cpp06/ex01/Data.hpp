/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 04:07:50 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 04:07:50 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		int	_num;
		Data();

	public:
		Data(int num);
		~Data();
		Data(const Data &f);
		Data& operator=(const Data &f);

		int	getNum(void) const;
};

#endif