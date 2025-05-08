/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:01:57 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/08 19:02:45 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed{

private:
	int					_value;
	static const int	_fractional_bits;

public:
	Fixed(); 								// A default constructor
	Fixed(const Fixed& other);				// A copy constructor.
	~Fixed(); 								// A destructor.

	Fixed& operator = (const Fixed& other);	// A copy assignment operator overload.
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
