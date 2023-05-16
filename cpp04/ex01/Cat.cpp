/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:08:37 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 10:15:09 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    _brain = new Brain;
    std::cout << "\033[35mCat constructor called\033[0m" << std::endl;
    this->printIdeas(5);
}

Cat::Cat(const Cat &copy) : Animal()
{
    this->_type = copy._type;
    _brain = new Brain(*copy._brain);
    std::cout << "\033[35mCat copy constructor called\033[0m" << std::endl;
    this->printIdeas(5);
}

Cat::~Cat()
{
    delete (_brain);
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::printIdeas(int n)
{
    std::cout << "\033[35mCat ideas : ";
    for (int i = 0; i < n; i++)
    {
        std::cout << "\033[35m" << _brain->getIdeas(i) << " \033[0m";
    }
    std::cout << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
		*(this->_brain) = *(cat._brain);
	}
	return (*this);
}