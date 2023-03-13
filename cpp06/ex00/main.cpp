/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:43:04 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 19:34:39 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	double num = 0.0;
	if (argc != 2)
		std::cout << "Input Num!" << std::endl;
	else
	{
		ScalarConverter::parsing(argv[1]);
		num = atof(argv[1]);
		ScalarConverter::printChar(num);
		ScalarConverter::printInt(num);
		ScalarConverter::printFloat(num);
		ScalarConverter::printDouble(num);
	}
	return (0);
}

/*
00 = static_cast(형변환 캐스트)
01 = reinterpret_cast(포인터타입 변환 캐스트)
02 = dynamic_cast(안전한 다운 캐스트)
const_cast(const제거? 캐스트)
*/