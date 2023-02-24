/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:08:04 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 22:58:40 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "DOG : ";
	j->makeSound();
	std::cout << "CAT : ";
	i->makeSound();
	std::cout << "NO TYPE : ";
	meta->makeSound();

	delete j;
	delete i;
	delete meta;
	//실패 예시 (가상함수선언을안하면 부모함수가 실행됨)
	const WrongAnimal* cat = new WrongCat();
	std::cout << cat->getType() << " " << std::endl;
	std::cout << "CAT : ";
	cat->makeSound();

	//해재할떄도 자식클래스는 소멸자호출x = 누수발생원인
	delete cat;

	return (0);
}