#include "Fixed.hpp"

Fixed::Fixed(): fixed_point_val(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_val = integer << Fractional_bits;
}

Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_val = roundf(floating * (1 << this->Fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->fixed_point_val = fixed.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& val) const
{
	Fixed ret;

	ret.setRawBits(this->fixed_point_val + val.fixed_point_val);
	return (ret);
}

Fixed	Fixed::operator-(const Fixed& val) const
{
	Fixed ret;

	ret.setRawBits(this->fixed_point_val - val.fixed_point_val);
	return (ret);
}

Fixed	Fixed::operator*(const Fixed& val) const
{
	Fixed ret;

	ret.setRawBits((this->fixed_point_val * val.fixed_point_val) / (1 << Fractional_bits));
	return (ret);
}

Fixed	Fixed::operator/(const Fixed& val) const
{
	Fixed ret;

	ret.setRawBits((this->fixed_point_val / val.fixed_point_val) / (1 << Fractional_bits));
	return (ret);
}

Fixed&	Fixed::operator++(void)
{
	this->fixed_point_val++;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->fixed_point_val--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--(*this);
	return (tmp);
}

bool Fixed::operator==(const Fixed& val) const
{
	return (this->fixed_point_val == val.fixed_point_val);
}

bool Fixed::operator!=(const Fixed& val) const
{
	return (this->fixed_point_val != val.fixed_point_val);
}

bool Fixed::operator>(const Fixed& val) const
{
	return (this->fixed_point_val > val.fixed_point_val);
}

bool Fixed::operator<(const Fixed& val) const
{
	return (this->fixed_point_val < val.fixed_point_val);
}

bool Fixed::operator>=(const Fixed& val) const
{
	return (this->fixed_point_val >= val.fixed_point_val);
}

bool Fixed::operator<=(const Fixed& val) const
{
	return (this->fixed_point_val <= val.fixed_point_val);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_val = raw;
}

float	Fixed::toFloat(void) const
{
	float	rtn;
	rtn = this->fixed_point_val;
	rtn /= (1 << this->Fractional_bits);
	return (rtn);
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point_val >> this->Fractional_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& num)
{
	os << num.toFloat();
	return (os);
}

Fixed& Fixed::min(Fixed& val1, Fixed& val2)
{
	if (val1 < val2)
		return (val1);
	else
		return (val2);
}

Fixed& Fixed::max(Fixed& val1, Fixed& val2)
{
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}

const Fixed& Fixed::min(const Fixed& val1, const Fixed& val2)
{
	if (val1 < val2)
		return (val1);
	else
		return (val2);
}

const Fixed& Fixed::max(const Fixed& val1, const Fixed& val2)
{
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}
