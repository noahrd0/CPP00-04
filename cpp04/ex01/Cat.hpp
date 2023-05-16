/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:01:04 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 10:12:39 by nradal           ###   ########.fr       */
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
    Cat(const Cat &copy);
    ~Cat();

    Cat	&operator=(const Cat &cat);

    void    printIdeas(int n);
};

#endif