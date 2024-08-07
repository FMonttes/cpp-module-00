#include "Fixed.hpp"

Fixed::Fixed(void) : number(0)
{
}

Fixed::Fixed(const int num)
{
	number = num << this->fractionalBits;
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}
Fixed::Fixed(const float input)
{
	this->number = roundf(input * (1 << this->fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &s)
{
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
}

int Fixed::getRawBits(void) const
{
	return (number);
}

void Fixed::setRawBits(int const raw)
{
	number = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool Fixed::operator>(const Fixed &fixedValue) const
{
	return (number > fixedValue.getRawBits());
}

bool Fixed::operator<(const Fixed &fixedValue) const
{
	return (number < fixedValue.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixedValue) const
{
	return (number >= fixedValue.getRawBits());
}
bool Fixed::operator<=(const Fixed &fixedValue) const
{
	return (number <= fixedValue.getRawBits());
}
bool Fixed::operator==(const Fixed &fixedValue) const
{
	return (number == fixedValue.getRawBits());
}
bool Fixed::operator!=(const Fixed &fixedValue) const
{
	return (number != fixedValue.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixedValue) const
{
	return (Fixed(this->toFloat() + fixedValue.toFloat()));
}
Fixed Fixed::operator*(const Fixed &fixedValue) const
{
	return (Fixed(this->toFloat() * fixedValue.toFloat()));
}
Fixed Fixed::operator-(const Fixed &fixedValue) const
{
	return (Fixed(this->toFloat() - fixedValue.toFloat()));
}
Fixed Fixed::operator/(const Fixed &fixedValue) const
{
	return (Fixed(this->toFloat() / fixedValue.toFloat()));
}
Fixed &Fixed::operator++()
{
	this->number++;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed	old;

	old = *this;
	operator++();
	return (old);
}
Fixed &Fixed::operator--()
{
	this->number--;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed	old;

	old = *this;
	operator--();
	return (old);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return ((a < b) ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return ((a > b) ? a : b);
}