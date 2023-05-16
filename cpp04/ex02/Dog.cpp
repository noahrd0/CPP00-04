/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:08:51 by nradal            #+#    #+#             */
/*   Updated: 2023/05/15 17:12:45 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    _brain = new Brain;
    std::cout << "\033[36mDog constructor called\033[0m" << std::endl;
    this->printIdeas(5);
}

Dog::Dog(const Dog &dog) : Animal()
{
    this->_type = "Dog";
    _brain = new Brain(*dog._brain);
    std::cout << "\033[35mDog copy constructor called\033[0m" << std::endl;
}

Dog::~Dog()
{
    delete (_brain);
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::printIdeas(int n)
{
    std::cout << "\033[36mDog ideas : ";
    for (int i = 0; i < n; i++)
    {
        std::cout << "\033[36m" << _brain->getIdeas(i) << " \033[0m";
    }
    std::cout << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
		*(this->_brain) = *(dog._brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof !" << std::endl;
}