/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felipe <felipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:21:15 by fmontes           #+#    #+#             */
/*   Updated: 2024/07/12 14:56:43 by felipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

std::string truncate(const std::string &str)
{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	else
	{
		return (str);
	}
}

void PhoneBook::searchContacts(std::string contactToSearch)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contacts[i].getFirstName() == contactToSearch)
		{
			std::cout << i << " | " << std::setw(10) << std::right << truncate(contacts[i].getFirstName()) << " | " 
			<< std::setw(10) << std::right << truncate(contacts[i].getLastName()) << " | " << std::setw(10) 
			<< std::right << truncate(contacts[i].getNickName()) << std::endl;
			break ;
		}
		i++;
	}
	if (i == 8)
		std::cout << "Contact not found" << std::endl;
}

void PhoneBook::schedule()
{
	int i = 0;
	while (true)
	{
		std::string command;
		std::cout << "ADD, SEARCH or EXIT" << std::endl;
		std::cout << std::endl;
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
		{
			if (i == 8)
				i = 0;
			contacts[i++].start();
		}
		else if (command == "SEARCH")
		{
			std::string contactToSearch;
			std::cout << "displaying contact: ";
			std::cin >> contactToSearch;
			searchContacts(contactToSearch);
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << std::endl;
	}
}