/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:17:07 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 12:06:19 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
	std::cout << this->_name << " created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}