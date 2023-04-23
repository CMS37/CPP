/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 03:06:42 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/24 00:58:24 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &f)
{
	*this = f;
}

RPN&	RPN::operator=(const RPN &f)
{
	_s = f.getStack();
	return (*this);
}

bool	is_oper(char c)
{
	if (c == '-' || c == '+' || c == '*' || c == '/')
		return (true);
	return (false);
}

void RPN::calculate(std::string str)
{
	int len = str.length();

	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			i++;
		if (isdigit(str[i]))
			_s.push(str[i] - '0');
		else if (is_oper(str[i]))
		{
			if (_s.size() < 2)
			{
				std::cout << "Error\n";
				return;
			}
			int op2 = _s.top();
			_s.pop();
			int op1 = _s.top();
			_s.pop();
			switch (str[i])
			{
				case '+':
					_s.push(op1 + op2);
					break;
				case '-':
					_s.push(op1 - op2);
					break;
				case '*':
					_s.push(op1 * op2);
					break;
				case '/':
					_s.push(op1 / op2);
					break;
			}
		}
		else
		{
			std::cout << "Error\n";
			return;
		}
	}
	if (_s.size() != 1)
	{
		std::cout << "Error\n";
		return ;
	}
	std::cout << _s.top() << std::endl;
}

std::stack<int>	RPN::getStack(void) const
{
	return (_s);
}