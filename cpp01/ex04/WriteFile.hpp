/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteFile.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:02:19 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 16:14:27 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITEFILE_HPP
# define WRITEFILE_HPP

# include <iostream>
# include <fcntl.h>
# include <unistd.h>
# include <stdexcept>

class WriteFile
{
public:
	WriteFile(std::string filename, std::string txt);
	~WriteFile();
};

#endif

