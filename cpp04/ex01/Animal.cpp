/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:04:35 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 13:22:12 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    this->_type = animal._type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	if (this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

void    Animal::makeSound() const
{
    if (_type == "Cat")
        std::cout << "Meow Meow !" << std::endl;
    else if (_type == "Dog")
        std::cout << "Woof Woof !" << std::endl;
    else
        std::cout << "@#^&*(*@# ! (weird noise)" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}