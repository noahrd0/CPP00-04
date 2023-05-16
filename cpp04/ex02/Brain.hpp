/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:49:20 by nradal            #+#    #+#             */
/*   Updated: 2023/05/16 10:08:40 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>
# include <cstdlib>

class Brain
{
private:
    std::string _ideas[100];
    
public:
    Brain();
    Brain(const Brain &copy);
    ~Brain();

    Brain	&operator=(const Brain &brain);

    std::string getIdeas(int index);
    std::string ideasGenerator(int size);
};

#endif