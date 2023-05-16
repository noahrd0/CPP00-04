/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:59:24 by nradal            #+#    #+#             */
/*   Updated: 2023/05/11 11:13:33 by nradal           ###   ########.fr       */
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
    virtual ~Animal();

    
    void          makeSound(void) const;
    std::string   getType() const;
};

#endif