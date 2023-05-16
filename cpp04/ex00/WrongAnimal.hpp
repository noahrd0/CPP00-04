/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:28:26 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 13:18:23 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
    
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    virtual ~WrongAnimal();
    
    WrongAnimal	&operator=(const WrongAnimal &wronganimal);

    void          makeSound(void) const;
    std::string   getType() const;
};

#endif