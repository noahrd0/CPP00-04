/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:53:42 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 10:09:32 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = ideasGenerator(7);
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::ideasGenerator(int size)
{
    std::string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string ideas = "";

    for (int i = 0; i < size; i++)
        ideas += alpha[std::rand() % alpha.size()];
    return (ideas);
}

std::string Brain::getIdeas(int index)
{
    if (index >= 0 && index <= 99)
        return (this->_ideas[index]);
    else
        return ("no more ideas :(");
}

Brain	&Brain::operator=(const Brain &brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = brain._ideas[i];
	}
	return (*this);
}