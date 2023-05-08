/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:02:42 by nradal            #+#    #+#             */
/*   Updated: 2023/04/05 10:54:11 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <limits.h>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

public:
	Contact();
	~Contact();

	void	set_first_name(std::string first_name);
	void	set_last_name(std::string last_name);
	void	set_nickname(std::string nickname);
	void	set_phone_number(std::string phone_number);
	void	set_darkest_secret(std::string darkest_secret);
	
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	std::string	get_phone_number();
	std::string	get_darkest_secret();
};
