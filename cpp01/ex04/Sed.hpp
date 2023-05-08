/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:21:47 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 15:44:44 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>

class Sed
{
private:
	std::string	_s1;
	std::string	_s2;
	std::string	_filetxt;
	std::string _sed;
	void		_Sed(void);
	
public:
	std::string	getSed(void);
	Sed(std::string filetxt, std::string s1, std::string s2);
	~Sed();
};

#endif