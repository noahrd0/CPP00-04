/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:13:05 by nradal            #+#    #+#             */
/*   Updated: 2023/06/05 18:33:43 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Abstract materia default constructed called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "Abstract materia constructed called" << std::endl;
}

AMateria::AMateria(AMateria const & ref) : _type(ref._type)
{
	std::cout << "Abstract materia copy constructed called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Abstract materia destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Abstract materia used on " << target.getName() << std::endl;
}