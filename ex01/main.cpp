/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:06:47 by rrimonte          #+#    #+#             */
/*   Updated: 2024/05/19 13:45:35 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

int main(void)
{
	PhoneBook	phonebook;
	Contact		contact;
	std::string	command;
	int			count;
	int			len;

	count = 0;
	len = 0;
	for(int i = 0; command.compare("EXIT") != 0; i++)
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
			phonebook.display_all_contacts(len);
			contact.search_index(len, phonebook);	
		}
	}
	return(0);
}