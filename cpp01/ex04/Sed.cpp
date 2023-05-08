/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:21:50 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 15:54:15 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <cstring>

Sed::Sed(std::string filetxt, std::string s1, std::string s2)
{
	if (s1 == "")
	{
		this->_sed = filetxt;
		return ;
	}
	this->_s1 = s1;
	this->_s2 = s2;
	this->_filetxt = filetxt;
	_Sed();
}

Sed::~Sed()
{
}

std::string	Sed::getSed()
{
	return (this->_sed);
}

void Sed::_Sed()
{
    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;
    while ((pos = _filetxt.find(_s1, lastPos)) != std::string::npos)
	{
        result.append(_filetxt, lastPos, pos - lastPos);
        result.append(_s2);
        lastPos = pos + _s1.size();
    }
    result.append(_filetxt, lastPos);
    _sed = result;
}
