/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:17:20 by nradal            #+#    #+#             */
/*   Updated: 2023/04/11 15:43:53 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	void 		setType(std::string type);
	std::string	getType(void);
	Weapon(std::string type);
	Weapon(void);
	~Weapon();
};

#endif
