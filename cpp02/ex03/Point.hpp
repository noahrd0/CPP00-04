/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:17:24 by nradal            #+#    #+#             */
/*   Updated: 2023/04/20 12:33:22 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const float f1, const float f2);
	Point(const Point &copy);
	~Point();
	Point& operator=(Point& other);

	float	getPValue(char select) const;
};

#endif