/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:52:37 by nradal            #+#    #+#             */
/*   Updated: 2023/04/18 15:16:58 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	this->_value = copy.getRawBits();
}

Fixed::Fixed(const int value)
{
	this->_value = (value << this->_bits);
}

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << this->_bits));
}

float	Fixed::toFloat(void) const
{
	return(float(this->_value) / (1 << this->_bits));
}

int		Fixed::toInt(void) const
{
	return(this->_value >> this->_bits);
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &source)
{
    if (this != &source)
    {
        this->_value = source.getRawBits();
    }
    return (*this);
}

bool	Fixed::operator>(Fixed const &source)
{
	if (this->_value > source._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &source)
{
	if (this->_value < source._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &source)
{
	if (this->_value == source._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &source)
{
	if (this->_value <= source._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &source)
{
	if (this->_value == source._value)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &source)
{
	if (this->_value != source._value)
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(Fixed const &source)
{
	return Fixed(this->_value + source._value);
}

Fixed Fixed::operator-(Fixed const &source)
{
	return Fixed(this->_value - source._value);
}

Fixed Fixed::operator*(Fixed const &source)
{
	Fixed temp;
	temp.setRawBits((this->_value * source._value) >> this->_bits);
	return (temp);
}

Fixed Fixed::operator/(Fixed const &source)
{
	Fixed temp;
	temp.setRawBits(this->toFloat() / source.toFloat());
	return (temp);
}

Fixed	&Fixed::operator++()
{
	this->_value += 1;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp;
	
	temp = *this;
	this->_value += 1;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp;

	temp = *this;
	this->_value -= 1;
	return (temp);
}

Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	else
		return (f2);
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);
}

std::ostream &	operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

