/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:52:05 by nradal            #+#    #+#             */
/*   Updated: 2023/06/05 18:40:29 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*   _inventory[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & ref);
		~MateriaSource();
        
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
        
		MateriaSource & operator=(MateriaSource const & ref);
};

#endif