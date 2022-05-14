#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					fixed_point_val;
	static const int	Fractional_bits = 8;
public:
	Fixed();
	Fixed(const Fixed& src);
	Fixed(const int integer);
	Fixed(const float floating);
	~Fixed();

	Fixed& operator=(const Fixed& cpy);

	Fixed	operator+(const Fixed& val) const;
	Fixed	operator-(const Fixed& val) const;
	Fixed	operator*(const Fixed& val) const;
	Fixed	operator/(const Fixed& val) const;

	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	bool	operator<(const Fixed& val) const;
	bool	operator>(const Fixed& val) const;
	bool	operator<=(const Fixed& val) const;
	bool	operator>=(const Fixed& val) const;
	bool	operator==(const Fixed& val) const;
	bool	operator!=(const Fixed& val) const;

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed& min(Fixed& val1, Fixed& val2);
	static Fixed& max(Fixed& val1, Fixed& val2);
	static const Fixed&	min(const Fixed& val1, const Fixed& val2);
	static const Fixed&	max(const Fixed& val1, const Fixed& val2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& src);

#endif
