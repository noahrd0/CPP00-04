/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:01:15 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 09:55:34 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap constructor called (" << this->_name << ")" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy._name)
{
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    std::cout << "FragTrap copy constructor called (" << this->_name << ")" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called (" << this->_name << ")" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->_hit_points <= 0)
        std::cout << "FragTrap " << this->_name << " is dead" << std::endl;
    else
        std::cout << "FragTrap High fives guys ?" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
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