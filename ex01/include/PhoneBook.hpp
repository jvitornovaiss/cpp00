/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovais <jnovais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:41:23 by jnovais           #+#    #+#             */
/*   Updated: 2026/10/22 13:05:49 by jnovais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include "Contact.hpp"


class PhoneBook
{
    private:
        static const int MAX_CONTACTS = 8;
        Contact contacts[MAX_CONTACTS];
        int     count;
        int     validCount;
        std::string formatRow(int index);
    public:
    PhoneBook();
    ~PhoneBook();
    
    void        addContact(void);
    void        listContacts(void);
    void        showContact(void);
};
#endif

