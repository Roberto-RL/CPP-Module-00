/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:24:17 by rrimonte          #+#    #+#             */
/*   Updated: 2024/05/19 13:43:03 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

	PhoneBook::PhoneBook(){};
	PhoneBook::~PhoneBook(){};

void	PhoneBook::get_contact_info(int count)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;
	bool		valid;

	valid = true;
	while(valid)
	{
		std::cout << "Enter a first name" << std::endl;
		std::getline(std::cin, first_name);
		if(!first_name.empty())
			break;
		std::cout << "First name is empty" << std::endl;
	}
	while(valid)
	{
		std::cout << "Enter a last name" << std::endl;
		std::getline(std::cin, last_name);
		if(!last_name.empty())
			break;
		std::cout << "Last name is empty" << std::endl;
	}
	while(valid)
	{
		std::cout << "Enter a nickname" << std::endl;
		std::getline(std::cin, nickname);
		if(!nickname.empty())
			break;
		std::cout << "Nickname is empty" << std::endl;
	}
	while(valid)
	{
		std::cout << "Enter a phone number" << std::endl;
		std::getline(std::cin, phone_number);
		if(!phone_number.empty())
			break;
		std::cout << "Phone number is empty" << std::endl;
	}
	while(valid)
	{
		std::cout << "Enter a secret" << std::endl;
		std::getline(std::cin, secret);
		if(!secret.empty())
			break;
		std::cout << "Secret is empty" << std::endl;
	}
	this->arraycontact[count].add_contact(count, first_name, 
		last_name, nickname, phone_number, secret);
}
void	PhoneBook::display_all_contacts(int len)
{
	this->arraycontact[0].head_table();
	for(int i = 0; i < len; i++)
		this->arraycontact[i].display();
}

void	PhoneBook::display_contact(int i)
{
	this->arraycontact[i].display();
}