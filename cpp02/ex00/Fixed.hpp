/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:18:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/08 20:18:34 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_raw;
		static const int	_bits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &f);

		Fixed&	operator=(const Fixed &f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif 