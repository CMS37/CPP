/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:35:01 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/19 20:13:02 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string path)
{
	std::ifstream	data(path);
	std::string		line, date;
	std::size_t		index;
	double			btc;

	_map.clear();
	if (data.is_open())
	{
		getline(data, line);
		while(getline(data,line))
		{
			index = line.find(',');
			if(index == std::string::npos)
			{
				std::cout << "Data file error\n";
				exit(0);
			}
			date = line.substr(0, index);
			btc = std::atof(line.substr(index + 1).c_str());
			_map.insert(std::make_pair(date, btc));
		}
	}
	else
	{
		std::cout << "Can't find base file\n";
		exit(0);
	}
	data.close();
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &f)
{
	*this = f;
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange &f)
{
	_map = f.getMap();
	return (*this);
}

bool	check_year(std::string year)
{
	int y = std::atoi(year.c_str());

	if(year.size() != 4)
		return (false);
	if (y <= 0)
		return (false);
	return (true);
}

bool	check_month(std::string month)
{
	int m = std::atoi(month.c_str());

	if (month.size() != 2)
		return (false);
	if ( m < 1 || m > 12)
		return (false);
	return (true);
}

bool	check_day(std::string day, std::string month)
{
	const int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int m = std::atoi(month.c_str());
	int d = std::atoi(day.c_str());

	if (day.size() != 2)
		return (false);
	if (d < 1 || d > days_in_month[m - 1])
		return (false);
	return (true);
}

int	check_val(std::string val)
{
	double num = std::atof(val.c_str());
	if (num < 0.0)
		return (NOT_POS);
	if (num > 1000.0)
		return (BIG_NUM);
	return (0);
}

int parse(std::string line)
{
	std::size_t index, field1, field2;
	std::string year, month, day, date, val;

	index = line.find('|');
	if (index == std::string::npos || line[index - 1] != ' ' || line[index + 1] != ' ')
		return (BAD_INPUT);
	field1 = line.find('-');
	if (field1 == std::string::npos)
		return (BAD_INPUT);
	year = line.substr(0, field1);
	if (!check_year(year))
		return (BAD_INPUT);
	field2 = line.find('-', field1 + 1);
	if (field2 == std::string::npos)
		return (BAD_INPUT);
	month = line.substr(field1 + 1, 2);
	if (!check_month(month))
		return (BAD_INPUT);
	day = line.substr(field2 + 1, 2);
	if (!check_day(day, month))
		return (BAD_INPUT);
	val = line.substr(index + 2);
	return (check_val(val));
}

void	BitcoinExchange::print_val(std::string line)
{
	std::size_t	index = line.find('|');
	std::string	date = line.substr(0, index - 1);
	double		val = std::atof(line.substr(index + 2).c_str());
	std::map<std::string, double>::iterator iter = _map.find(date);
	std::cout << std::setprecision(10);
	if (iter != _map.end())
		std::cout << date << " => " << val << " = " << val * iter->second << std::endl;
	else
		std::cout << "NO DATA : " << date << std::endl;
}

void	BitcoinExchange::run(std::string input)
{
	std::ifstream file(input);
	std::string line;

	if (file.is_open())
	{
		getline(file, line);
		if (line != "date | value")
			std::cout << "Error : Check file head\n";
		while (getline(file, line))
		{
			int err = parse(line);
			switch (err)
			{
				case BAD_INPUT:
					std::cout << "Error: bad input => " << line << std::endl;
					break;
				case NOT_POS:
					std::cout << "Error: not a positive number.\n";
					break;
				case BIG_NUM:
					std::cout << "Error: too large a number.\n";
					break;
				default:
					print_val(line);
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

std::map<std::string, double> BitcoinExchange::getMap(void) const
{
	return (_map);
}
