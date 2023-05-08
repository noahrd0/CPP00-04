/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:17:09 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 12:06:33 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon		*_weapon;
	
public:
	void attack(void);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif