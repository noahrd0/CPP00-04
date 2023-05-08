/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:32:00 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 16:15:11 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReadFile.hpp"

ReadFile::ReadFile(std::string filename)
{
	this->_filename = filename;
	this->_fd = open(filename.c_str(), O_RDONLY);
	if (this->_fd == -1)
		throw std::runtime_error("Erreur d'ouverture du fichier : " + filename);
	_extractTxt();
	close(_fd);
}

ReadFile::~ReadFile()
{
}

std::string ReadFile::getFileTxt(void)
{
	return (this->_filetxt);
}

void		ReadFile::_extractTxt()
{
	for (int i = read(_fd, _buffer, sizeof(_buffer)); i > 0; i = read(_fd, _buffer, sizeof(_buffer)))
    	_filetxt.append(_buffer, i);
}
