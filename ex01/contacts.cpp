/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:56:16 by rrimonte          #+#    #+#             */
/*   Updated: 2024/05/19 13:47:47 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

Contact::Contact(){};
Contact::~Contact(){};

void Contact::add_contact(int index, std::string firstName, std::string lastName, std::string nickname, std::string phone, std::string secret)
{
	this->index = index;
	this->first_name = firstName;
	this->last_name = lastName;
	this->nickname = nickname;
	this->phone = phone;
	this->secret = secret;
}
void Contact::head_table()
{
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|     Index|first name| Last Name| Nick Name|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
}
void Contact::display()
{
	std::cout << "|" << std::setw(10) << this->index;
	if(this->first_name.length() > 10)
		std::cout << "|" << this->first_name.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->first_name;
	if(this->last_name.length() > 10)
		std::cout << "|" << this->last_name.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->last_name;
	if(this->nickname.length() > 10)
		std::cout << "|" << this->nickname.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->nickname;
	std::cout << "|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
}
void Contact::search_index(int len)
{
	std::string	str_index;

	if (len != 0)
	{
		std::cout << "enter a index" << std::endl;
		std::getline(std::cin, str_index);
		int str = atoi(str_index.c_str());
		for(int i = 0; i < len; i++)
		{
			if (str == this->index)
				phonebook.display_contact(i);
		}
	}
	else
		std::cout << "phonebook is empty" << std::endl;
}