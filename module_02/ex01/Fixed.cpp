#include "Fixed.hpp"

Fixed::Fixed(): fixed_point_val(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed& fixed)
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
