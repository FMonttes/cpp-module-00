/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:28 by fmontes           #+#    #+#             */
/*   Updated: 2024/07/31 13:46:03 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""),
	darkestSecret("")
{
}

Contact::Contact(const std::string &firstName, const std::string &lastName,
	const std::string &nickname, const std::string &phoneNumber,
	const std::string &darkestSecret) : firstName(firstName),
	lastName(lastName), nickName(nickname), phoneNumber(phoneNumber),
	darkestSecret(darkestSecret)
{
}

Contact::~Contact()
{
}

void Contact::setFirstName(std::string &firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string &lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string &nickName)
{
	this->nickName = nickName;
}

void Contact::setDarkestSecret(std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void Contact::setPhoneNumber(std::string &phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickName()
{
	return (this->nickName);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}
bool Contact::isvalid() const
{
	return (!firstName.empty() && !lastName.empty() && !nickName.empty()
		&& !phoneNumber.empty() && !darkestSecret.empty());
}

void Contact::start()
{
	std::cout << "First name: ";
	std::getline(std::cin, this->firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, this->lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickName);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkestSecret);
}

void Contact::search()
{
	std::cout << "First name: " << getFirstName() << std::endl;
	std::cout << "Last name: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickName() << std::endl;
}