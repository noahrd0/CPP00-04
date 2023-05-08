/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixex.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:53:57 by nradal            #+#    #+#             */
/*   Updated: 2023/04/17 09:14:24 by nradal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;
	
public:
	Fixed();
	Fixed(Fixed &copy);
	~Fixed();
	Fixed &operator=(Fixed &source);
	int getRawBits(void);
	void setRawBits(int const raw);
};

#endif