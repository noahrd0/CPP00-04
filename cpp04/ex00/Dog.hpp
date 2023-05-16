/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:07:23 by nradal            #+#    #+#             */
/*   Updated: 2023/05/09 15:23:49 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
};

#endif