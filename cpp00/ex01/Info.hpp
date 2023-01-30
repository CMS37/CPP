/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: min-cho <min-cho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:37:52 by min-cho           #+#    #+#             */
/*   Updated: 2023/01/30 20:17:37 by min-cho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_HPP
# define INFO_HPP

# include <iostream>

class Info {

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
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getSecret();
	std::string getPhoneNum();
	int			getNum();
};

#endif