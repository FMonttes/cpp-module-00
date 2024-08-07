#include "Fixed.hpp"

Fixed::Fixed(void) : number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Fixed int constructor called" << std::endl;
	number = num << this->fractionalBits;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = copy;
}
Fixed::Fixed(const float input)
{
	std::cout << "Fixed Float Constructor called" << std::endl;
	this->number = roundf(input * (1 << this->fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &s)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &s)
	{
		number = s.getRawBits();
	}
	return (*this);
}
float Fixed::toFloat(void) const
{
	return ((float)this->number / (float)(1 << this->fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->number >> this->fractionalBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	number = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
