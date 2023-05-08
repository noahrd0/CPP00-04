/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:18:39 by nradal            #+#    #+#             */
/*   Updated: 2023/04/12 16:13:12 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include "ReadFile.hpp"
#include "WriteFile.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filetxt;

		try
		{
			ReadFile rd(argv[1]);
			filetxt = rd.getFileTxt();
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			return (1);
		}
		Sed sed(filetxt, argv[2], argv[3]);
		WriteFile wr(std::string(argv[1]) + ".replace", sed.getSed());
	}
	else
	{
		std::cout << "./Sed \"filename\", \"replaced\", \"replacer\"" << std::endl;
		return (1);
	}
}