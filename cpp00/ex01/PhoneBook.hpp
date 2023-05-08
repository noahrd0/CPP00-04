/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:02:47 by nradal            #+#    #+#             */
/*   Updated: 2023/04/05 11:03:26 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contacts[8];
    int     _count;

public:
    PhoneBook();
    ~PhoneBook();

    void    set_contacts();
    Contact get_contact(int index);
};

#endif


