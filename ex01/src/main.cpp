/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovais <jnovais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:48:52 by jnovais           #+#    #+#             */
/*   Updated: 2026/10/22 22:33:39 by jnovais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Colors.hpp"


static void	showMenu(void)
{
	std::cout << BOLD << LILAC << "Welcome to EJHEY's PhoneBook." << RESET << "\n";
	std::cout << LILAC << "Commands:\n";
	std::cout << BOLD << PINK  << "ADD"    << RESET << PEACH << "\t- Add a contact\n";
	std::cout << BOLD << MINT  << "SEARCH" << RESET << PEACH << "\t- List contacts and view one\n";
	std::cout << BOLD << CYAN << "EXIT"   << RESET << PEACH << "\t- Exit and clear all contacts\n" << LILAC;
}

int main(void)
{
    PhoneBook phoneBook;
    std::string cmd;

    showMenu();
    while (true)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, cmd))
			break ;
		else if (cmd == "ADD")
			phoneBook.addContact();
		else if (cmd == "SEARCH")
        {
			phoneBook.listContacts();
            phoneBook.showContact();
        }
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Invalid command. Use ADD, SEARCH, or EXIT." << std::endl;
	}
}
