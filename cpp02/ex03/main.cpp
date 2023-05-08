/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:05:40 by nradal            #+#    #+#             */
/*   Updated: 2023/04/20 12:37:51 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main()
{
	// Triangle
	Point a(1, 1);
	Point b(2, 9);
	Point c(6, 3);
	
	// Points
	Point p1(3.5, 5);
	Point p2(1.1, 2.5);
	Point p3(5.4, 4);
	Point p4(2, 8);
	Point p5(-1, 0.5);
	
	// Bsp
	std::cout << bsp(a, b ,c ,p1) << std::endl;
	std::cout << bsp(a, b ,c ,p2) << std::endl;
	std::cout << bsp(a, b ,c ,p3) << std::endl;
	std::cout << bsp(a, b ,c ,p4) << std::endl;
	std::cout << bsp(a, b ,c ,p5) << std::endl;
	return (0);
}