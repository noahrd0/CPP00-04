/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:02:45 by nradal            #+#    #+#             */
/*   Updated: 2023/04/05 11:03:36 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() :
	_count(0)
{}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::set_contacts()
{
	std::string	input;
	
	if (this->_count == 8)
		_count = 0;
	std::cout << "First name :" << std::endl;
	std::getline(std::cin, input);
	if (!std::cin)
		return ;
	_contacts[_count].set_first_name(input);
		std::cout << "Last name :" << std::endl;
	std::getline(std::cin, input);
	if (!std::cin)
		return ;
	_contacts[_count].set_last_name(input);
		std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, input);
	if (!std::cin)
		return ;
	_contacts[_count].set_nickname(input);
		std::cout << "Phone number :" << std::endl;
	std::getline(std::cin, input);
	if (!std::cin)
		return ;
	_contacts[_count].set_phone_number(input);
		std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, input);
	if (!std::cin)
		return ;
	_contacts[_count].set_darkest_secret(input);
	_count++;
}

Contact	PhoneBook::get_contact(int index)
{
	return (this->_contacts[index]);
}