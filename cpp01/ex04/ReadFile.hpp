/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadFile.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:32:03 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 15:55:53 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READFILE_HPP
# define READFILE_HPP

# include <iostream>
# include <fcntl.h>
# include <unistd.h>
# include <stdexcept>

class ReadFile
{
private:
	char		_buffer[256];
	int			_fd;
	std::string _filename;
	std::string _filetxt;
	void		_extractTxt(void);
	
public:
	ReadFile(std::string filename);
	~ReadFile();
	std::string	getFileTxt(void);
};

#endif