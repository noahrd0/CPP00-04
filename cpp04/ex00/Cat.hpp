/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:01:04 by nradal            #+#    #+#             */
/*   Updated: 2023/05/09 15:17:00 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
};

#endif