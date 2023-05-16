/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:15:01 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 09:47:34 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap constructor called (" << this->_name << ")" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called (" << this->_name << ")" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->_hit_points <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy._name)
{
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    std::cout << "ScavTrap copy constructor called (" << this->_name << ")" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_attack_damage = rhs._attack_damage;
		this->_energy_points = rhs._energy_points;
		this->_hit_points = rhs._hit_points;
	}
	return (*this);
}