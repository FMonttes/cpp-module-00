/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:24:20 by fmontes           #+#    #+#             */
/*   Updated: 2024/07/10 08:30:54 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string darkestSecret;
	int phoneNumber;

  public:
	Contact();
	~Contact();
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setDarkestSecret(std::string darkestSecret);
	void setPhoneNumber(int phoneNumber);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getDarkestSecret();
	int getPhoneNumber();
	void start();
	void search();
};

#endif