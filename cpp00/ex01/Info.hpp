/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:37:52 by min-cho           #+#    #+#             */
/*   Updated: 2023/02/19 15:58:31 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP

# include <iostream>

class Info 
{
	private:
		int			num;
		std::string firstName;
		std::string	lastName;
		std::string	nickName;
		std::string secret;
		std::string	phoneNum;

	public:
		void		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void		setSecret(std::string secret);
		void		setPhoneNum(std::string phoneNum);
		void		setNum(int num);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getSecret(void);
		std::string getPhoneNum(void);
		int			getNum(void);
};

#endif