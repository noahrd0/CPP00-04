/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:11:50 by nradal            #+#    #+#             */
/*   Updated: 2023/06/05 18:36:27 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string const _type;
    
public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(AMateria const & ref);
    
	virtual std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
    
	// AMateria & AMateria::operator=(AMateria const & ref)
};

#endif
