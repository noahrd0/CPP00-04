/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:58:15 by nradal            #+#    #+#             */
/*   Updated: 2023/04/13 13:54:24 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		harl.complain(argv[1]);
		return (0);
	}
	else
	{
		std::cout << "./HarlFilter {DEBUG, INFO, WARNING, ERROR}" << std::endl;
		return (1);
	}
}