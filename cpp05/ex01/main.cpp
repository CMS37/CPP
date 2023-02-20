/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:56:32 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/20 09:04:44 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat min("min", 10);
		std::cout << min << std::endl;
		Form a("apple", 20, 10);
		std::cout << a << std::endl;
		a.beSigned(min);
		std::cout << a << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}