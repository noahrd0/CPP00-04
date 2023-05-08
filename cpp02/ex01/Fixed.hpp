/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixex.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:53:57 by nradal            #+#    #+#             */
/*   Updated: 2023/04/18 10:15:08 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;
	
public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
	Fixed &operator=(Fixed const &source);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif