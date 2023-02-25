/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:56:32 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/25 18:34:19 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat				min("min", 10);
	ShrubberyCreationForm	tree("test");
	RobotomyRequestForm		robot("test");
	PresidentialPardonForm	pardon("test");

	min.executeForm(tree);
	min.executeForm(robot);
	min.executeForm(pardon);

	std::cout << "Roboto test : is 50%?\n";
	for(int i = 0; i < 10; i++)
	{
		RobotomyRequestForm test("test");
		min.executeForm(test);
	}
	return (0);
}
