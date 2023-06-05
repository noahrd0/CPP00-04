/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:41:42 by nradal            #+#    #+#             */
/*   Updated: 2023/06/05 18:30:24 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character constructor called (" << _name << ")" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character destructor called (" << _name << ")" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

Character::Character(Character const & ref) : _name(ref.getName() + "_copy")
{
	for(int i = 0; i < 4; i++)
	{
		if ((ref._inventory)[i])
			(this->_inventory)[i] = (ref._inventory[i])->clone();
	}
    std::cout << "Character copy constructor called for (" << _name << ") from (" << ref._name << ")" << std::endl;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
	{
		std::cout << this->_name << " tried to equip nothing..." << std::endl;
		return ;
	}
	while ((this->_inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << " can't equip more than 4 materia" << std::endl;
		return ;
	}
	(this->_inventory)[i] = m;
	std::cout << this->_name << " equipped materia " << m->getType() << " in slot " << i << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << this->_name << " tried to unequip nothing at slot " << idx << std::endl;
	else if (!(this->_inventory)[idx])
		std::cout << this->_name << " has nothing equipped at slot " << idx << std::endl;
	else
	{
		AMateria *ptr = (this->_inventory)[idx];
		std::cout << this->_name << " unequipped " << ptr->getType() << " at slot "<< idx << std::endl;
		(this->_inventory)[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->_inventory)[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	std::cout << name;
	((this->_inventory)[idx])->use(target);
}

AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->_inventory)[idx];
}

Character & Character::operator=(Character const & ref)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
	return (*this);
}