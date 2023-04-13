/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:35:01 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/13 20:35:01 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

int	parse(std::string line)
{
	std::size_t index, field1, field2;
	std::string year, month, day, data;

	index = line.find('|');
	if (index == std::string::npos)
		return (BAD_INPUT);
	if (line[index - 1] != ' ' || line[index - 1] != ' ')
		return (BAD_INPUT);
	field1 = line.find('-');
	if (field1 == std::string::npos)
		return (BAD_INPUT);
	year = line.substr(0, field1);
	//setyear
	field2 = line.find('-', field1 + 1);
	if (field2 == std::string::npos)
		return (BAD_INPUT);
	month = line.substr(field1 + 1, field2);
	day = line.substr(field2 + 1, index - 1);
	data = line.substr(0, index -1);

}

void BitcoinExchange::run(std::string input)
{
	std::ifstream file(input);
	std::string	line;
	int	err = 0;

	if (file.is_open())
	{
		getline(file, line);
		if (line != "data | value")
			std::cout << "Error : Check file head\n";
		while(getline(file, line))
		{
			err = parse(line);
			switch(err)
			{
				case BAD_INPUT:
					std::cout << "Error: bad input => " << line << std::endl;
					break ;
				case NOT_POS:
					std::cout << "Error: not a positive number.\n";
					break ;
				case BIG_NUM:
					std::cout << "Error: too large a number.\n";
					break ;
			}
		}
	}
	else
	{
		std::cout << "Can't open file\n";
		exit(0);
	}
	file.close();
}