/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:02:44 by nradal            #+#    #+#             */
/*   Updated: 2023/04/05 11:03:10 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	truncate_str(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	display_single_contact(Contact ct)
{
	std::cout << std::endl << std::setw(22 + (8 / 2)) << std::right << "Contact" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "First name	: " << ct.get_first_name() << std::endl;
	std::cout << "Last name	: " << ct.get_last_name() << std::endl;
	std::cout << "Nickname	: " << ct.get_nickname() << std::endl;
	std::cout << "Phone number	: " << ct.get_phone_number() << std::endl;
	std::cout << "Darkest secret	: " << ct.get_darkest_secret() << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
}

void	display_contacts(PhoneBook *phone_book)
{
	int			i;
	std::string	input;
	Contact		ct;
	
	std::cout << std::endl << std::setw(22 + (20 / 2)) << std::right << "My Awesome PhoneBook" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|" << std::setw(10) << std::right << "Index";
	std::cout << "|" << std::setw(10) << std::right << "First name";
	std::cout << "|" << std::setw(10) << std::right << "Last name";
	std::cout << "|" << std::setw(10) << std::right << "Nick name" << "|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (i = 0; i < 8; i++)
	{
		ct = phone_book->get_contact(i);
		if (ct.get_first_name().empty())
			break ;
		std::cout << "|" << std::setw(10) << std::right << i + 1;
		std::cout << "|" << std::setw(10) << std::right << truncate_str(ct.get_first_name());
		std::cout << "|" << std::setw(10) << std::right << truncate_str(ct.get_last_name());
		std::cout << "|" << std::setw(10) << std::right << truncate_str(ct.get_nickname()) << "|" << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	std::cout << std::endl << "Enter index :" << std::endl;
	std::getline(std::cin, input);
	if (!std::cin)
		return ;
	if (input == "1" || input == "2" || input == "3" || input == "4" || input == "5" || input == "6" || input == "7" || input == "8")
	{
		std::istringstream iss(input);
		int intput;
		iss >> intput;
		if (intput > i)
			std::cout << "This index doesn't match any contact." << std::endl;
		else
			display_single_contact(phone_book->get_contact(intput - 1));
		return ;
	}
	std::cout << "This index doesn't match any contact." << std::endl;
}

int main()
{
	PhoneBook	phone_book;
	Contact		ct;
	std::string	input;

	while (1)
	{
		std::cout << std::endl << "Available commands :" << std::endl;
		std::cout << "1 : ADD" << std::endl;
		std::cout << "2 : SEARCH" << std::endl;
		std::cout << "3 : EXIT" << std::endl;
		
		std::getline(std::cin, input);
		if (!std::cin)
			break ;
		if (input == "ADD" || input == "1")
		{
			phone_book.set_contacts();
			ct = phone_book.get_contact(0);
			std::cout << ct.get_first_name() << std::endl;
		}
		else if (input == "SEARCH" || input == "2")
		{
			display_contacts(&phone_book);
		}
		else if (input == "EXIT" || input == "3")
		{
			break ;
		}
	}
	return (0);
}