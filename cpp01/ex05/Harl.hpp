/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:26:06 by nradal            #+#    #+#             */
/*   Updated: 2023/04/13 14:14:56 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <map>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	std::string _levels[4];
	void (Harl::*_functions[4])(void);
	
public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif