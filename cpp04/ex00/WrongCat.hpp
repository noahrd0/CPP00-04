/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:27:50 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 13:19:19 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    ~WrongCat();

    WrongCat	&operator=(const WrongCat &wrongcat);
};

#endif