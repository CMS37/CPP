/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:42:56 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/25 18:24:28 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//인턴 테스트케이스 작성필요함 5서클로넘어가서 일단 cpp05부턴 보류//

int main(void)
{
	Intern		min;
	Bureaucrat	cho("cho", 22);
	Form		*tree;	
	Form		*robot;
	Form		*pardon;
	Form		*wrong;

	tree = min.makeForm("shrubbery creation", "test");
	robot = min.makeForm("robotomy request", "test1");
	pardon =min.makeForm("presidential pardon", "test2");
	wrong = min.makeForm("Wrong request", "test3");

	try
	{	
		cho.executeForm(*tree);
		cho.executeForm(*robot);
		cho.executeForm(*pardon);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete tree;
	delete robot;
	delete pardon;

	//leaks
	//system("leaks a.out");
	return (0);
}