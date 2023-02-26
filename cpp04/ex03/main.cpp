/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:37:41 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/26 15:21:50 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "----------------------------------------------\n";
	ICharacter* me = new Character("min");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "------------Try Wrong Materia Type------------\n";
	tmp = src->createMateria("fire");
	me->equip(tmp);
	std::cout << "----------------------------------------------\n";
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "----------Try equip Materia over 4------------\n";
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << "\n---------------------Use!---------------------\n";
	
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << "------------------Try use over 4--------------\n";
	me->use(4, *bob);
	std::cout << "\n---------Unequip 1idx and Try use-------------\n";
	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	delete bob;
	delete me;
	std::cout << "\n------------------COPY TEST-------------------\n";
	Character	*min1 = new Character("min");
	Character	*bob1 = new Character("bob");

	tmp = src->createMateria("ice");
	min1->equip(tmp);
	min1->use(0, *bob1);
	
	*bob1 = *min1;
	delete min1;
	
	Character	*test = new Character("test");
	bob1->use(0, *test);

	delete bob1;
	delete test;
	delete src;
	// system("leaks a.out");
	return 0;
}
