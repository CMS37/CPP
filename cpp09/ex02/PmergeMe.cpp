/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:27:10 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/20 11:03:00 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &f)
{
	*this = f;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &f)
{
	(void)f;
	return (*this);
}

template <typename T>
void	merge_sort(T &con)
{
	if (con.size() <= 1)
		return;

	T left, right;
	typename T::iterator it = con.begin();
	typename T::size_type half_size = con.size() / 2; // 부호가 다른 정수와의 비교 오류 해결을 위해 size_type 사용
	for (typename T::size_type i = 0; i < half_size; ++i) // size_type 사용
	{
		left.push_back(*it);
		++it;
	}
	for (typename T::size_type i = half_size; i < con.size(); ++i) // size_type 사용
	{
		right.push_back(*it);
		++it;
	}

	merge_sort(left);
	merge_sort(right);

	typename T::iterator left_it = left.begin();
	typename T::iterator right_it = right.begin();
	it = con.begin();
	while (left_it != left.end() && right_it != right.end())
	{
		if (*left_it <= *right_it)
		{
			*it = *left_it;
			++left_it;
		}
		else
		{
			*it = *right_it;
			++right_it;
		}
		it++;
	}

	while (left_it != left.end())
	{
		*it = *left_it;
		++left_it;
		++it;
	}

	while (right_it != right.end())
	{
		*it = *right_it;
		++right_it;
		++it;
	}
}

void	PmergeMe::merge(int ac, char **av)
{
	int num;
	_len = ac;

	for (int i = 1; av[i]; i++)
	{
		for(int j = 0; av[i][j]; j++)
		{
			if (!isdigit(av[i][j]))
			{
				std::cout << "Error\n";
				return ;
			}
		}
		std::stringstream ss(av[i]);
		if (ss >> num)
		{
			_vec.push_back(num);
			_lst.push_back(num);
		}
		else
		{
			std::cout << "Error\n";
			return ;
		}
	}
	std::cout << "Before: ";
	for(int i = 1; av[i]; i++)
		std::cout << av[i] << " ";
	std::cout << std::endl;


	merge_sort(_vec);
	merge_sort(_lst);

	std::cout << "After: ";
	std::vector<int>::iterator iter = _vec.begin();
	for (; iter != _vec.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << std::endl;
}