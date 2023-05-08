/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:21:41 by nradal            #+#    #+#             */
/*   Updated: 2023/04/20 17:54:29 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called (" << this->_name << ")" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "ClapTrap copy constructor called (" << this->_name << ")" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 0)
	{
		if (amount == 1)
			std::cout << "ClapTrap OOF ! " << this->_name << " took " << amount << " damage" << std::endl;
		else
			std::cout << "ClapTrap OOF ! " << this->_name << " took " << amount << " damages" << std::endl;
		this->_hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > 0)
	{
		if (this->_hit_points <= 0)
			std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		else if (this->_energy_points <= 0)
			std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
		else
		{
			std::cout << "ClapTrap " << this->_name << " repaired itself from " << this->_hit_points << " to ";
			this->_hit_points += amount;
			this->_energy_points -= 1;
			std::cout << this->_hit_points << "HP !" << std::endl;
		}
	}
}

int	ClapTrap::getHitPoints()
{
	return (this->_hit_points);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->_name = other._name;
	this->_attack_damage = other._attack_damage;
	this->_energy_points = other._energy_points;
	this->_hit_points = other._hit_points;
	this->_name = other._name;

	return (*this);
}