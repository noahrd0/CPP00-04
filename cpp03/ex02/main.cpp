/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:15:07 by nradal            #+#    #+#             */
/*   Updated: 2023/05/09 11:21:24 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap character1("nradal");
	ScavTrap character2("guard");
	FragTrap character3("frag");
	
	character2.guardGate();
	character2.attack("Goblins");
	character2.takeDamage(30);
	character2.beRepaired(20);
	character2.takeDamage(999);
	character2.guardGate();
	character2.attack("Goblins");
	character2.beRepaired(100);

	character1.attack("Boss");
	character1.takeDamage(9);
	character1.beRepaired(9);
	character1.takeDamage(999);
	character1.attack("Boss");
	character1.beRepaired(100);

	character3.highFivesGuys();
	character3.attack("Ghost");
	character3.takeDamage(90);
	character3.beRepaired(25);
	character3.takeDamage(999);
	character3.attack("Ghost");
	character3.beRepaired(100);
	character3.highFivesGuys();
}