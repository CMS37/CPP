/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:43:04 by marvin            #+#    #+#             */
/*   Updated: 2023/02/28 18:43:04 by marvin           ###   ########seoul.kr  */
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

// inf(양의 무한대) -inf(음의 무한대), nan(숫자아님)
//리터널 : 코드에 직접삽입된 값(상수)