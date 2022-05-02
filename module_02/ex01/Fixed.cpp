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

Fixed::Fixed(const int floating)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_val = floating << Fractional_bits; // is wrong
}



Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
