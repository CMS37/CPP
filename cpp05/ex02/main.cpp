/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:56:32 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/20 14:10:31 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
int main(void)
{
	Bureaucrat min("min", 10);
	Form	*tree = new ShrubberyCreationForm("test");
	Form	*robo = new RobotomyRequestForm("test");
	
	tree->execute(min);
	for (int i = 0; i < 5;i++)
		robo->execute(min);
	delete tree;

	return (0);
}