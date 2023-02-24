/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:42:56 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/21 16:42:56 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//인턴 테스트케이스 작성필요함 5서클로넘어가서 일단 cpp05부턴 보류//

int main(void)
{
	Intern		min;
	Bureaucrat	cho("cho", 10);
	Form		*tree;	
	Form		*robot;
	Form		*pardon;
	Form		*wrong;

	tree = min.makeForm("shrubbery creation request", "test");
	robot = min.makeForm("robotomy request", "test");
	pardon =min.makeForm("presidential pardon request", "test");
	wrong = min.makeForm("Wrong request", "test");

	cho.executeForm(*tree);
	cho.executeForm(*robot);
	cho.executeForm(*pardon);
	cho.executeForm(*wrong);

	delete tree;
	delete robot;
	delete pardon;
	delete wrong;

	//leaks
	//system("leaks a.out");
	return (0);
}