/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:48:00 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 21:48:00 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	std::cout << "--------------------------------------\n";
	{
		Array<char> arr(3);
		try
		{
			for (int i = 0;i < 5; i++)
			{
				arr[i] = (65 + i);
				std::cout << arr[i] << std::endl; 
			}
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------\n";
	{
		Array<int> arr(3);
		try
		{
			for (int i = 0;i < 5; i++)
			{
				arr[i] = i;
				std::cout << arr[i] << std::endl; 
			}
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------\n";
	// system("leaks a.out");
	return (0);
}