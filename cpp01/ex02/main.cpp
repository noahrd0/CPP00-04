/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:35:17 by nradal            #+#    #+#             */
/*   Updated: 2023/04/11 14:42:16 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "L'adresse de la string en mémoire : " << &str << std::endl;
	std::cout << "L'adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "L'adresse stockée dans stringREF : " << &stringREF << std::endl << std::endl;
	std::cout << "La valeur de la string : " << str << std::endl;
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;
	return (0);
}