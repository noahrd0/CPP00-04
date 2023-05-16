/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:07:23 by nradal            #+#    #+#             */
/*   Updated: 2023/05/15 16:53:37 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
private:
Brain   *_brain;

public:
    Dog();
    Dog(const Dog &dog);
    ~Dog();

    Dog	&operator=(const Dog &dog);

    void    printIdeas(int n);
    void    makeSound() const;
};

#endif