/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 05:30:36 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/06 05:30:36 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong Arguments" << std::endl;
		exit(1);
	}
	std::ifstream inFile(argv[1]);
	std::ofstream outFile(static_cast<std::string>(argv[1]) + ".replace");
	if (inFile.is_open() && outFile.is_open())
	{
		//문자열읽어서 재배치
		inFile.close();
		outFile.close();
	}
	else
	{
		std::cout << "Can't find files!" << std::endl;
		exit(1);	
	}
	return (0);
}