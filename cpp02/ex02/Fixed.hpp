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
# include <cmath>

class Fixed
{
	private:
		int					_raw;
		static const int	_bits = 8;

	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed &f);	
		Fixed&	operator=(const Fixed &f);

		bool	operator>(const Fixed &f);
		bool	operator<(const Fixed &f);
		bool	operator>=(const Fixed &f);
		bool	operator<=(const Fixed &f);
		bool	operator==(const Fixed &f);
		bool	operator!=(const Fixed &f);
		Fixed&	operator+(const Fixed &f);
		Fixed&	operator-(const Fixed &f);
		Fixed&	operator*(const Fixed &f);
		Fixed&	operator/(const Fixed &f);
		Fixed&	operator++(void);
		Fixed&	operator++(int);
		Fixed&	operator--(void);
		Fixed&	operator--(int);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat( void ) const;
		int					toInt( void ) const;
		static Fixed&		min(Fixed& f1, Fixed& f2);
		static Fixed&		max(Fixed& f1, Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator<<(std::ostream& o, const Fixed& f);

#endif 