/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:23:38 by ysoroko           #+#    #+#             */
/*   Updated: 2023/06/05 18:47:00 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* nradal = new Character("nradal");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	nradal->equip(tmp);
	tmp = src->createMateria("cure");
	nradal->equip(tmp);
	ICharacter* bob = new Character("bob");
	nradal->use(0, *bob);
	nradal->use(1, *bob);

	delete (bob);
	delete (nradal);
	delete (src);
	return (0);
}