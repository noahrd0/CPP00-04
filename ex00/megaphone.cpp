/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:47:23 by nradal            #+#    #+#             */
/*   Updated: 2023/04/03 10:18:26 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int, char **argv)
{
    int i = 0;
    int j = 1;

    if (!argv[1])
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (argv[j])
        {
            while (argv[j][i])
            {
                if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
                    argv[j][i] -= 'a' - 'A';
                i++;
            }
            std::cout << argv[j];
            i = 0;
            j++;
        }
    }
    std::cout << std::endl;
    return (0);
}