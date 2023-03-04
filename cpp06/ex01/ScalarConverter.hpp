/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:43:30 by marvin            #+#    #+#             */
/*   Updated: 2023/02/28 18:43:30 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>

class ScalarConverter
{
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &f);
		ScalarConverter& operator=(const ScalarConverter &f);

		static void		printChar(double num);
		static void		printInt(double num);
		static void		printFloat(double num);
		static void		printDouble(double num);
		static void		parsing(char *str);
		static double	convert(char *str);
};

#endif