/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:05:59 by nradal            #+#    #+#             */
/*   Updated: 2023/04/20 12:36:06 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	Point::getPValue(char select) const
{
	if (select == 'x')
		return (this->_x.toFloat());
	else
		return (this->_y.toFloat());
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::Point(const Point& copy) : _x(copy._x), _y(copy._y)
{
}

Point::Point() : _x(0), _y(0)
{
}

Point::~Point()
{
}

Point& Point::operator=(Point& other)
{
    return (other);
}


 