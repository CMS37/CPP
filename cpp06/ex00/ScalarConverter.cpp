/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:58:22 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 19:22:28 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &f)
{
	*this = f;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &f)
{
	if (this != &f)
	{
		
	}
	return (*this);
}

void	printErr(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	exit(1);
}

int	checkStr(char *str, char c)
{
	int cnt = 0;

	for(size_t i = 0; i < strlen(str); i++)
	{
		if(str[i] == c)
		{
			cnt++;
			for(size_t j = i + 1;j < strlen(str); j++)
			{
				if(str[j] == c)
					printErr();
			}
			if (c == '.' && (str[i + 1] == '\0' || str[i + 1] == 'f'))
				printErr();
		}
	}
	return (cnt);
}

void	ScalarConverter::parsing(char *str)
{
	int fcnt = 0;
	int cnt = 0;

	if (!strcmp(str, "nanf") || !strcmp(str, "nan"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		exit (0);
	}
	else if (!strcmp(str, "+inff") || !strcmp(str, "inff") || !strcmp(str, "+inf") || !strcmp(str, "inf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		exit (0);
	}
	else if (!strcmp(str, "-inff") || !strcmp(str, "-inf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		exit (0);
	}
	cnt = checkStr(str, '.');
	fcnt = checkStr(str, 'f');
	if (fcnt == 1)
	{
		if (cnt != 1)
			printErr();
	}
	for(size_t i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]) && !(str[i] == '.' || str[i] == 'f'))
			printErr();
	}
}

void	ScalarConverter::printChar(double num)
{
	if (num < 32 || num > 126)
		std::cout << "char: Non displayable" << std::endl;
	else if (num < CHAR_MIN || num > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(num) << "'" << std::endl;
}

void	ScalarConverter::printInt(double num)
{
	if (num > INT_MAX || num < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(num) << std::endl;
}

void	ScalarConverter::printFloat(double num)
{
	std::cout << std::fixed;
	std::cout << "float: " << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
}

void	ScalarConverter::printDouble(double num)
{
	std::cout << std::fixed;
	std::cout << "double: " << std::setprecision(1) << num << std::endl;
}
