/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:48:42 by nradal            #+#    #+#             */
/*   Updated: 2023/06/05 17:49:09 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string _type;
	public:
		Ice();
		~Ice();
		Ice(Ice const & ref);
        
		std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
        
		Ice & operator=(Ice const & ref);
};

#endif