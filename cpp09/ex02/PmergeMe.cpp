/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:27:10 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/29 20:40:54 by min-cho          ###   ########seoul.kr  */
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
	_vec = f.getVec();
	_lst = f.getLst();
	return (*this);
}

template <typename T>
void insert_sort(T& con)
{
    typename T::iterator it, key;
    it = con.begin();
    ++it;
    for (; it != con.end(); ++it) 
    {
        key = it;
        while (key != con.begin() && *--key > *it)
        {
            std::iter_swap(key, it);
            it = key;
        }
    }
}

template <typename T>
void	merge_sort(T &con)
{
	if (con.size() <= 1)
		return;

	T left, right;
	typename T::iterator it = con.begin();
	typename T::size_type half_size = con.size() / 2;
	for (typename T::size_type i = 0; i < half_size; ++i)
	{
		left.push_back(*it);
		++it;
	}
	for (typename T::size_type i = half_size; i < con.size(); ++i)
	{
		right.push_back(*it);
		++it;
	}

	if (left.size() <= 50)
		insert_sort(left);
	else
		merge_sort(left);
	if (right.size() <= 50)
		insert_sort(right);
	else
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
		++it;
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

void	PmergeMe::merge_insert_sort(int ac, char **av)
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
			// _deq.push_back(num);
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

	clock_t s = clock();
	merge_sort(_vec);
	double vec_time = static_cast<double>(clock() - s) / CLOCKS_PER_SEC;

	s = clock();
	merge_sort(_lst);
	double lst_time = static_cast<double>(clock() - s) / CLOCKS_PER_SEC;
	
	// s = clock();
	// merge_sort(_deq);
	// double deq_time = static_cast<double>(clock() - s) / CLOCKS_PER_SEC;
	
	std::cout << "After: ";
	std::vector<int>::iterator iter = _vec.begin();
	for (; iter != _vec.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << std::endl;
	std::cout << std::fixed << std::setprecision(6);
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << vec_time << " us\n";
	std::cout << "Time to process a range of " << _lst.size() << " elements with std::list : " << lst_time << " us\n";
	// std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque : " << deq_time << " us\n";
}

std::vector<int>	PmergeMe::getVec(void) const
{
	return (_vec);
}

std::list<int>	PmergeMe::getLst(void) const
{
	return (_lst);
}