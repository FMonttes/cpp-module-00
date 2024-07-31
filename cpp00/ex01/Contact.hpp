/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:20 by fmontes           #+#    #+#             */
/*   Updated: 2024/07/31 13:46:20 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <limits>
# include <string>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	Contact();
	Contact(const std::string &firstName, const std::string &lastName,
		const std::string &nickname, const std::string &phoneNumber,
		const std::string &darkestSecret);
	~Contact();
	bool isvalid() const;
	void setFirstName(std::string &firstName);
	void setLastName(std::string &lastName);
	void setNickName(std::string &nickName);
	void setDarkestSecret(std::string &darkestSecret);
	void setPhoneNumber(std::string &phoneNumber);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getDarkestSecret();
	std::string getPhoneNumber();
	void start();
	void search();
};

#endif