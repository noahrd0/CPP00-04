/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:30:07 by nradal            #+#    #+#             */
/*   Updated: 2023/05/09 15:30:08 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wronganimal;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    if (_type == "WrongCat")
        std::cout << "Woem Woem !" << std::endl;
    else
        std::cout << "@#^&*(*@# ! (weird noise)" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	if (this != &wronganimal)
	{
		this->_type = wronganimal._type;
	}
	return (*this);
}