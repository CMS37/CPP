/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 04:06:08 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 04:06:08 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"

class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &f);
		Serializer& operator=(const Serializer &f);

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif