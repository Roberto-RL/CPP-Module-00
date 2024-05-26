/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:06:47 by rrimonte          #+#    #+#             */
/*   Updated: 2024/05/26 15:14:30 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

int main(void)
{
	PhoneBook	phonebook;
	Contact		contact;
	std::string	command;
	std::string	str_index;
	int			count;
	int			len;

	count = 0;
	len = 0;
	while (!(command.compare("EXIT") == 0 || std::cin.eof()))
	{
		std::cout << "enter a command <ADD/SEARCH/EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			std::cout << "Entro en ADD" << std::endl;
			phonebook.get_contact_info(count);
			count++;
			if(len != 8)
				len++;
			if(count == 8)
				count = 0;
		}
		if (command.compare("SEARCH") == 0)
		{
			if(len == 0)
				std::cout << "phonebook is empty" << std::endl;
			else
			{
				phonebook.display_all_contacts(len);
				std::cout << "enter a index" << std::endl;
				std::getline(std::cin, str_index);
				int tmp_index = atoi(str_index.c_str());
				if (tmp_index >= 1 && tmp_index <= 8 && tmp_index <= len)
					phonebook.display_contact(tmp_index - 1);	
				else
					std::cout << "invalid index" << std::endl;
			}
		}
	}
	return(0);
}
