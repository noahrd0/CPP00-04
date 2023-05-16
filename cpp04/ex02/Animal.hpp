/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:59:24 by nradal            #+#    #+#             */
/*   Updated: 2023/05/15 16:45:22 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP

# include <iostream>

class Animal
{
protected:
    std::string _type;
    
public:
    Animal();
    Animal(const Animal &animal);
    virtual ~Animal();

    Animal	&operator=(const Animal &animal);

    virtual void          makeSound(void) const = 0;
    std::string   getType() const;
};

#endif