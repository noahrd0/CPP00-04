/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:51:05 by nradal            #+#    #+#             */
/*   Updated: 2023/04/11 11:56:48 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie1 = newZombie("AAAAAAAA");
    zombie1->announce();
    delete (zombie1);
    randomChump("BBBBBBB");

    return (0);
}
