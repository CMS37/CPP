/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:08:04 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/14 17:08:04 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *animals[4];

	for(int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "-------------------------------\n";
	animals[0]->getBrain()->setIdea("WALK!", 0);
	animals[0]->getBrain()->setIdea("PLAY!", 1);
	std::cout << animals[0]->getBrain()->getIdea(0) << std::endl;
	std::cout << animals[0]->getBrain()->getIdea(1) << std::endl;
	std::cout << "-------------------------------\n";
	for (int i = 0;i < 4; i++)
		delete animals[i];
	std::cout << "-------------------------------\n";
	Dog *dog1 = new Dog;
	Dog *dog2 = new Dog(*dog1);

	delete dog1;
	delete dog2;
	std::cout << "-------------------------------\n";
	Dog *dog1 = new Dog;
	Dog	*dog2 = new Dog;
	
	*dog1 = *dog2;
	delete dog1;
	delete dog2;
	std::cout << "-------------------------------\n";
	return (0);
}