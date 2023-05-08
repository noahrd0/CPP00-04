/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:00:43 by nradal            #+#    #+#             */
/*   Updated: 2023/04/20 12:36:33 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float sqrt(float x) {
    if (x == 0) {
        return 0;
    }
    float guess = x / 2.0;
    float old_guess = guess;
    while (true) {
        guess = 0.5 * (guess + x / guess);
        if (guess == old_guess) {
            return guess;
        }
        old_guess = guess;
    }
}

float	vector(Point const p1, Point const p2)
{
	float	deltaX = p2.getPValue('x') - p1.getPValue('x');
	float	deltaY = p2.getPValue('y') - p1.getPValue('y');
	return (sqrt(deltaX * deltaX + deltaY * deltaY));
}

float	area(Point const p1, Point const p2, Point const p3)
{
	float	V1 = vector(p1, p2);
	float	V2 = vector(p1, p3);
	float	V3 = vector(p2, p3);
	float	demiP = 0.5 * (V1 + V2 + V3);
	return (sqrt(demiP * (demiP - V1) * (demiP - V2) * (demiP - V3)));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	ABC = area(a, b, c);
	float	PAB = area(point, a, b);
	float	PAC = area(point, a, c);
	float	PBC = area(point, b, c);
	Fixed	pArea(PAB + PAC + PBC);
	Fixed	abcArea(ABC);

	if (pArea == abcArea)
	{
		return (true);
	}
	else
	{
		return (false);
	}
}