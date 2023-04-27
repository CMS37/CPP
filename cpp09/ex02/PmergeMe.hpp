/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:27:20 by min-cho           #+#    #+#             */
/*   Updated: 2023/04/27 22:19:53 by min-cho          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <sstream>
# include <ctime>
# include <iomanip>

class PmergeMe
{
	private:
		size_t				_len;
		std::vector<int>	_vec;
		std::list<int>		_lst;
		// std::deque<int>		_deq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &f);
		PmergeMe& operator=(const PmergeMe &f);

		void	merge_insert_sort(int ac, char **av);

		std::vector<int>	getVec(void) const;
		std::list<int>		getLst(void) const;
};

#endif

/*
-데이터의 접근 방식
vector는 배열 기반으로 메모리에 연속적으로 저장되어 있기 때문에, 랜덤 접근(Random Access)이 가능
따라서 merge sort 알고리즘에서 vector는 인덱스를 이용하여 특정 위치의 요소에 빠르게 접근할 수 있음
반면에 list는 연결 리스트로 구현되어 있기 때문에, 특정 위치로의 랜덤 접근이 불가능하고, 요소를 순차적으로 탐색해야 함
따라서 list에서의 merge sort 알고리즘은 데이터의 접근이 느릴 수 있음

-데이터의 이동 비용
merge sort 알고리즘에서 데이터의 이동 비용은 중요한 요소
vector는 연속된 메모리 공간에 데이터가 저장되어 있어, 데이터를 복사할 때 메모리의 물리적인 이동이 발생x
반면에 list는 각 노드가 다음 노드의 포인터를 가지고 있기 때문에, 데이터를 복사하려면 포인터를 조작해야 하며, 메모리의 물리적인 이동이 필요
이로 인해 list에서의 데이터 이동 비용이 더 높음.

-메모리 사용량
merge sort 알고리즘에서 임시적인 메모리 공간이 필요한데, vector는 연속된 메모리 공간을 사용하기 때문에, 
메모리를 일관되게 할당하고 해제하는 과정이 간단하고 빠름
반면에 list는 연결 리스트로 구현되어 있기 때문에, 메모리를 동적으로 할당하고 해제하는 과정이 복잡하고 느림
*/