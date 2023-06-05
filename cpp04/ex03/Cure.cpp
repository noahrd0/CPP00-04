/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:32:52 by nradal            #+#    #+#             */
/*   Updated: 2023/06/05 18:39:59 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() : _type("cure")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << this->_type << " destructor called" << std::endl;
}

std::string const & Cure::getType( void ) const
{
	return (this->_type);
}

Cure::Cure(const Cure& ref) : AMateria(ref), _type(ref._type)
{
	std::cout << this->_type << " copy constructor called" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::string target_name = target.getName();
	std::cout << " heals " << target_name << "\'s wounds" << std::endl;
}

Cure *Cure::clone() const
{
	Cure	*ret = new Cure;
	return (ret);
}

Cure & Cure::operator=(Cure const & ref)
{
	std::cout << "Assigned from " << ref.getType() << std::endl;
	return (*this);
}