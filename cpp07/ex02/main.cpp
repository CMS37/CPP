/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:48:00 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 22:30:43 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

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
	{
		std::cout << "Copy Test\n";
		Array<int> arr1(3);
		for (int i = 0;i < 3; i++)
		{
			arr1[i] = i;
			std::cout << "arr1 : " << arr1[i] << std::endl; 
		}
		
		Array<int> arr2(arr1);
		for (int i = 0;i < 3; i++)
		{
			std::cout << "arr2 : " << arr2[i] << std::endl;
		}
	}
	// system("leaks a.out");
	return (0);
}
