/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:15:03 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 09:48:30 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &copy);
    ~ScavTrap();
    
    ScavTrap &operator=(const ScavTrap& rhs);

    void guardGate(void);
};

#endif
