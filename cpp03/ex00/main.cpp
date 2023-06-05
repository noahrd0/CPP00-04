/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:15:07 by nradal            #+#    #+#             */
/*   Updated: 2023/06/04 20:45:24 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap character1("nradal");
	ClapTrap character2(character1);
	
	character1.attack("character2"); 	// 1
	character1.attack("character2"); 	// 2
	character1.attack("character2"); 	// 3
	character1.attack("character2"); 	// 4
	character1.takeDamage(9);
	character1.beRepaired(9); 			// 5
	character1.attack("character2"); 	// 6
	character1.attack("character2"); 	// 7
	character1.attack("character2"); 	// 8
	character1.attack("character2"); 	// 9
	character1.attack("character2");	 // 10
	character1.attack("character2"); 	// OFE
	character1.attack("character2"); 	// OFE
	character1.takeDamage(999);
	character1.beRepaired(999); 		// DEAD
	character1.attack("character2"); 	// DEAD
	character2.attack("character3");
	character2 = character1;
	character2.attack("character3");
}