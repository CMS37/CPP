/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 05:30:36 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 20:47:43 by min-cho          ###   ########.fr       */
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
	std::ifstream fin(argv[1]);
	std::ofstream fout(static_cast<std::string>(argv[1]) + ".replace");
	if (fin.is_open() && fout.is_open())
	{
		std::string buf = Replace::readFile(fin);
		Replace::doReplace(&buf, argv[2], argv[3]);
		fout << buf;
		fin.close();
		fout.close();
	}
	else
	{
		std::cout << "Can't find files!" << std::endl;
		exit(1);	
	}
	return (0);
}
