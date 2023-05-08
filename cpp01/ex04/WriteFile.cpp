/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteFile.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:14:30 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 16:14:39 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WriteFile.hpp"

WriteFile::WriteFile(std::string filename, std::string txt)
{
    int fd;
    
    fd = open(filename.c_str(), O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1) {
        return;
    }
    write(fd, txt.c_str(), txt.size());
    close(fd);
}

WriteFile::~WriteFile()
{
}