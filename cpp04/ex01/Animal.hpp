/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:59:24 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 10:00:20 by nradal           ###   ########.fr       */
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

    void          makeSound(void) const;
    std::string   getType() const;
};

#endif