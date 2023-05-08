/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:51:09 by nradal            #+#    #+#             */
/*   Updated: 2023/04/11 13:31:33 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
    std::string _name;

public:
    ~Zombie();
    Zombie(std::string name);
    void announce(void);
};

void randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
