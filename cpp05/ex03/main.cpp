/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:42:56 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/27 17:27:35 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//인턴 테스트케이스 작성필요함 5서클로넘어가서 일단 cpp05부턴 보류//

int main(void)
{
	Intern		min;
	Bureaucrat	cho("cho", 20);
	Form		*tree;	
	Form		*robot;
	Form		*pardon;
	Form		*wrong;

	tree = min.makeForm("shrubbery creation", "test");
	robot = min.makeForm("robotomy request", "test1");
	pardon =min.makeForm("presidential pardon", "test2");
	wrong = min.makeForm("Wrong request", "test3");

	cho.executeForm(*tree);
	cho.executeForm(*robot);
	cho.executeForm(*pardon);

	delete tree;
	delete robot;
	delete pardon;

	//leaks
	//system("leaks a.out");
	return (0);
}