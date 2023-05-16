/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:01:04 by nradal            #+#    #+#             */
/*   Updated: 2023/05/15 16:50:58 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
private:
    Brain   *_brain;

public:
    Cat();
    Cat(const Cat &cat);
    ~Cat();

    Cat	&operator=(const Cat &cat);

    void    printIdeas(int n);
    void    makeSound() const;
};

#endif