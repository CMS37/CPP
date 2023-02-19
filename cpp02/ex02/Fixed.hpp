/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:18:34 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 21:41:03 by min-cho          ###   ########.fr       */
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

		bool	operator>(const Fixed &f) const;
		bool	operator<(const Fixed &f) const;
		bool	operator>=(const Fixed &f) const;
		bool	operator<=(const Fixed &f) const;
		bool	operator==(const Fixed &f) const;
		bool	operator!=(const Fixed &f) const;
		Fixed	operator+(const Fixed &f);
		Fixed	operator-(const Fixed &f);
		Fixed	operator*(const Fixed &f);
		Fixed	operator/(const Fixed &f);
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

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

/*
단순히 float 혹은 double 값에 int 값 1을 8 비트만큼 왼쪽으로 쉬프팅 한 값을 곱하면 된다. 
이 때 해당 값을 찾아낼 때 정확히 8 비트에 대해서만 남겨두어야 하므로, 
곱한 뒤 남은 소수점에 대해서는 roundf로 처리한다.
쉬프팅이 곧 곱셈 혹은 나눗셈과 동일하다는 개념을 이해하면, 
위 float 혹은 double 값에 쉬프팅한 값을 곱하는 것이 이해가 될 것이다.
곱한 결과로 _fixed_point를 저장해둔 뒤, 
toFloat이라는 멤버 함수로 찾을 때는 1을 8 비트만큼 왼쪽으로 쉬프팅한 값을 나누면 roundf를 통해 원래 값에서 정확히 8비트만 남은 값으로 찾아낼 수 있다.
*/

#endif 