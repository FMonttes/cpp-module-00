#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream> // Inclua esta linha para usar std::istringstream

PhoneBook::PhoneBook() : contactCount(0), oldestContactIndex(0)
{
	for (int i = 0; i < 8; ++i)
	{
		contacts[i] = Contact();
	}
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

void PhoneBook::listContacts()
{
	for (int i = 0; i < 8; ++i)
	{
		if (!contacts[i].getFirstName().empty())
		{
			std::cout << i << " | " << std::setw(10) << std::right << truncate(contacts[i].getFirstName()) << " | " << std::setw(10) << std::right << truncate(contacts[i].getLastName()) << " | " << std::setw(10) << std::right << truncate(contacts[i].getNickName()) << std::endl;
		}
	}
}

void PhoneBook::searchContacts(int index)
{
	if ((index < 0 || index >= 8) || contacts[index].getFirstName() == "")
	{
		std::cout << "invalid index" << std::endl;
		return ;
	}
	std::cout << "Contact details:" << std::endl;
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
	std::cout << "PhoneNumber: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret: " << contacts[index].getDarkestSecret() << std::endl;
}

int PhoneBook::stringToInt(const std::string &str)
{
	int	num;

	std::istringstream iss(str);
	iss >> num;
	return (num);
}

void PhoneBook::addContact(const Contact &newContact)
{
	if (!newContact.isvalid())
	{
		std::cout << "Invalid contact. All fields must be filled." << std::endl;
		return ;
	}
	if (contactCount < 8)
	{
		contacts[contactCount++] = newContact;
	}
	else
	{
		contacts[oldestContactIndex] = newContact;
		oldestContactIndex = (oldestContactIndex + 1) % 8;
	}
}
