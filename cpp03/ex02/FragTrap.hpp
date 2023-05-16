/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:01:18 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 09:55:15 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    FragTrap(FragTrap const &copy);
    ~FragTrap();
    
    FragTrap &operator=(const FragTrap& rhs);

    void highFivesGuys(void);
};

#endif