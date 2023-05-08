/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixex.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nradal <nradal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:53:57 by nradal            #+#    #+#             */
/*   Updated: 2023/04/18 14:46:03 by nradal           ###   ########.fr       */
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
	
	Fixed	&operator=(Fixed const &source);
	bool	operator>(Fixed const &source);
	bool	operator<(Fixed const &source);
	bool	operator>=(Fixed const &source);
	bool	operator<=(Fixed const &source);
	bool	operator==(Fixed const &source);
	bool	operator!=(Fixed const &source);
	Fixed	operator+(Fixed const &source);
	Fixed	operator-(Fixed const &source);
	Fixed	operator*(Fixed const &source);
	Fixed	operator/(Fixed const &source);
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int source);
	Fixed	operator--(int source);
	static Fixed& 		min(Fixed& f1, Fixed& f2);
	static Fixed& 		max(Fixed& f1, Fixed& f2);
	const static Fixed& min(const Fixed& f1, const Fixed& f2);
	const static Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif