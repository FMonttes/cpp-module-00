/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontes <fmontes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:21:19 by fmontes           #+#    #+#             */
/*   Updated: 2024/07/31 13:52:02 by fmontes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
  private:
	int contactCount;
	int oldestContactIndex;
	Contact contacts[8];

  public:
	PhoneBook();
	~PhoneBook();
	void addContact(const Contact &newContact);
	void displayContacts() const;
	void listContacts();
	void schedule();
	void searchContacts(int index);
	int stringToInt(const std::string &str);
};

#endif