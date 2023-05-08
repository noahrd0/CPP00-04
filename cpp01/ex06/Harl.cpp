/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:30:12 by nradal            #+#    #+#             */
/*   Updated: 2023/04/13 14:49:58 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
	_functions[0] = &Harl::debug;
	_functions[1] = &Harl::info;
	_functions[2] = &Harl::warning;
	_functions[3] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == _levels[i])
			break;
	}
	switch (i)
	{
	case DEBUG:
		debug();
		info();
		warning();
		error();
		break ;
	case INFO:
		info();
		warning();
		error();
		break ;
	case WARNING:
		warning();
		error();
		break ;
	case ERROR:
		error();
		break ;
	default :
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
}