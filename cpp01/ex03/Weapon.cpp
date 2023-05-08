/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:17:18 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 12:10:28 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon(void)
{
	
}

Weapon::~Weapon()
{
	std::cout << "Weapon deleted" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType()
{
	return (this->_type);
}