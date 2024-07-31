/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:51:26 by fmontes           #+#    #+#             */
/*   Updated: 2024/07/31 15:05:35 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	int index;
	PhoneBook phoneBook;
	Contact newContact;

	while (true)
	{
		std::string command;
		std::cout << "ADD, SEARCH or EXIT" << std::endl;
		std::cout << std::endl;
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			/* if (i == 8)
				i = 0;
			contacts[i].start();
			if (contacts[i].getFirstName().empty()
				|| contacts[i].getLastName().empty()
				|| contacts[i].getNickName().empty()
				|| contacts[i].getPhoneNumber().empty()
				|| contacts[i].getDarkestSecret().empty())
				std::cout << "cannot be empty" << std::endl;
			else
				i++; */
			std::string input;
			std::cout << "Enter first name: ";
			std::getline(std::cin, input);
			newContact.setFirstName(input);
			std::cout << "Enter last name: ";
			std::getline(std::cin, input);
			newContact.setLastName(input);
			std::cout << "Enter nickname: ";
			std::getline(std::cin, input);
			newContact.setNickName(input);
			std::cout << "Enter phone number: ";
			std::getline(std::cin, input);
			newContact.setPhoneNumber(input);
			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, input);
			newContact.setDarkestSecret(input);
			phoneBook.addContact(newContact);
		}
		else if (command == "SEARCH")
		{
			phoneBook.listContacts();
			std::string contactIndex;
			std::cout << "Enter the index of the contact to display: ";
			while (!(std::getline(std::cin, contactIndex) >> index))
			{
				std::cin.ignore();
				std::cin.clear();
				std::cout << "Invalid index. enter the valid index:  ";
			}
			std::cin.ignore();
			// std::getline(std::cin, contactIndex);
			// index = phoneBook.stringToInt(contactIndex);
			phoneBook.searchContacts(index);
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << std::endl;
	}
}