/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:08:50 by rrimonte          #+#    #+#             */
/*   Updated: 2024/05/26 13:42:59 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_HPP
# define GLOBAL_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>


class  Contact {
public:
	// Constructores
	 Contact(); // Constructor por defecto
	~ Contact(); // Destructor

	// Métodos
	void	add_contact(int index, std::string firstName,
		std::string lastName, std::string nickname, std::string phone, std::string secret);
	void	head_table();
	void	display();
	void	display_information();
private:
	//	Atributos
	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone;
	std::string	secret;
};

class  PhoneBook {
public:
	// Constructores
	PhoneBook(); // Constructor por defecto
	~PhoneBook(); // Destructor

	// Métodos
	void	get_contact_info(int count);
	void	display_all_contacts(int len);
	void	display_contact(int i);
private:
	//	Atributos
	Contact arraycontact[8];
};


#endif