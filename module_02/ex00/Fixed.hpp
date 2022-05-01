#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					fixed_point_val;
	static const int	Fractional_bits = 8;
public:
	Fixed();
	Fixed(Fixed& fixed);
	Fixed& operator=(const Fixed& cpy);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
