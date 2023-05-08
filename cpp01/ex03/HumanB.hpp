/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:17:13 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 12:09:07 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon		*_weapon;
	
public:
	void attack(void);
	void setWeapon(Weapon &weapon);
	HumanB(std::string name);
	~HumanB();
};

#endif