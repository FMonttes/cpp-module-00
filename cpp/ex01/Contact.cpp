/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:28 by fmontes           #+#    #+#             */
/*   Updated: 2024/07/10 09:46:32 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void Contact::setPhoneNumber(int phoneNumber)
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

int Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

void Contact::start()
{
	std::cout << "First name: ";
	std::cin >> this->firstName;
	std::cout << "Last name: ";
	std::cin >> this->lastName;
	std::cout << "Nickname: ";
	std::cin >> this->nickName;
	std::cout << "Phone number: ";
	std::cin >> this->phoneNumber;
	std::cout << "Darkest secret: ";
	std::cin >> this->darkestSecret;
}

void Contact::search()
{
	std::cout << "First name: " << getFirstName() << std::endl;
	std::cout << "Last name: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickName() << std::endl;
}