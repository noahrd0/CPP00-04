/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:51:05 by nradal            #+#    #+#             */
/*   Updated: 2023/04/11 14:23:50 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int N = 20;
	horde = zombieHorde(N, "Bob");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] (horde);
	return (0);
}
