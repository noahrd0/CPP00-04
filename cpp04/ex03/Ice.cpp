/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:32:52 by nradal            #+#    #+#             */
/*   Updated: 2023/06/05 17:38:25 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice() : _type("ice")
{
	std::cout << this->_type << " constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << this->_type << " destructor called" << std::endl;
}

std::string const & Ice::getType( void ) const
{
	return (this->_type);
}

Ice::Ice(const Ice& ref) : AMateria(ref), _type(ref._type)
{
    std::cout << this->_type << " copy constructor called" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::string target_name = target.getName();
	std::cout << " shoots an ice bolt at " << target_name << std::endl;
}

Ice *Ice::clone() const
{
	Ice	*ret = new Ice;
	return (ret);
}

Ice & Ice::operator=(Ice const & ref)
{
	std::cout << "Assigned from " << ref.getType() << std::endl;
	return (*this);
}