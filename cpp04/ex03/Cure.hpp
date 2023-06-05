/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:32:54 by nradal            #+#    #+#             */
/*   Updated: 2023/06/05 18:12:14 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
private:
    std::string _type;
    
public:
	Cure();
	~Cure();
	Cure(Cure const & ref);
    
	Cure *clone() const;
	std::string const & getType() const;
	void use(ICharacter& target);
    
	Cure & operator=(Cure const & ref);
};


#endif