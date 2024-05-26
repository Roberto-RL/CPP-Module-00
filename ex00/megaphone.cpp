/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrimonte <rrimonte@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:56:01 by rrimonte          #+#    #+#             */
/*   Updated: 2024/02/12 13:49:06 by rrimonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char** argv)
{
	if(argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; argv[i]; i++)
		{
			for(int x = 0; argv[i][x]; x++)
			{
					argv[i][x] = std::toupper(argv[i][x]);
					std::cout << argv[i][x];
			}
		}
		std::cout << std::endl;
	}
	return(0);
}