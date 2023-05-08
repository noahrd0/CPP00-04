/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:51:09 by nradal            #+#    #+#             */
/*   Updated: 2023/04/11 14:26:31 by nradal           ###   ########.fr       */
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
    Zombie();
    ~Zombie();
	void	setName(std::string name);
    void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
