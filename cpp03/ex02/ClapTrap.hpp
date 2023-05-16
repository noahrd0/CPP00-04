/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:01:39 by nradal            #+#    #+#             */
/*   Updated: 2023/05/09 09:57:36 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
	
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int	getHitPoints(void);

	ClapTrap &operator=(const ClapTrap& rhs);
};

#endif