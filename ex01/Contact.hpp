/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:56:27 by nradal            #+#    #+#             */
/*   Updated: 2023/04/03 11:19:07 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Contact
{
private:
    char *fisrt_name;
    char *last_name;
    char *nickname;
    long int phone_number;
    char *darkest_secret;

public:
    Contact(void);
    ~Contact();
};

Contact::Contact(void)
{
    std::cout << "Prenom :"; std::cin >> fisrt_name;
}

Contact::~Contact()
{
}
