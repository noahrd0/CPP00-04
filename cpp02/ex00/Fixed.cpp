/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:52:37 by nradal            #+#    #+#             */
/*   Updated: 2023/04/18 15:03:12 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = copy.getRawBits();
}

Fixed &Fixed::operator=(Fixed &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
    {
        this->_value = source.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

